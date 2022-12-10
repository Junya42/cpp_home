#include <string>
#include <cerrno>
#include <cstring>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <limits>

bool	atoi_(const char *nptr) {
	int			sign;
	long int	res;

	res = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*(nptr++) == '-')
			sign = -sign;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (res * sign > std::numeric_limits<int>::max())
			return (false);
		if (res * sign < std::numeric_limits<int>::min())
			return (false);
		res = res * 10 + *(nptr++) - 48;
	}
	if (res * sign > std::numeric_limits<int>::max())
		return (false);
	if (res * sign < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

int	get_sign(std::string &str)
{
	int	count = 0;
	int	signcount = 0;
	for (int i = 0; str[i]; i++)
	{
		if (isdigit(str[i]))
			count++;
		if (str[i] == '.')
			count++;
		if (str[i] == '-') {
			signcount++;
			if (count)
				return 0;
		}
		if (str[i] == '+') {
			while (str[i] == '+')
				str.erase(i, 1);
			if (count)
				return 0;
		}
	}
	if (signcount > 1) {
		for (int i = 0; str[i]; i++) {
			if (signcount % 2) {
				if (str[i] == '-' && i > 0) {
					str.erase(i, 1);
					i--;
				}
			}
			else {
				if (str[i] == '-') {
					while (str[i] == '-')
						str.erase(i, 1);
				}
			}
		}
	}
	return (1);
}

int	get_type(std::string str)
{
	int	point = 0;
	int	floating = 0;
	int	valid = 0;

	if (str[0] != '.')
	{
		if (!isdigit(str[0]) && str[0] != '-' && str[0] != '+')
			return (-1);
	}
	else
	{
		if (str[1])
			if (!isdigit(str[1]))
				return (-1);
	}
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != '-' && str[i] != '+')
			return (-1);
		if (str[i] == '.')
		{
			if (point || floating)
				return (-1);
			point = 1;
		}
		if (str[i] == 'f')
		{
			if (floating)
				return (-1);
			floating = 2;
		}
		if (isdigit(str[i]))
		{
			if (point && str[i] != '0')
				valid = 4;
			if (floating)
				return (-1);
		}
	}
	return ((point + floating + valid));
}

void	int_converter(std::string str)
{
	int	value;

	value = atoi(str.c_str());
	if (atoi_(str.c_str()) == false) {
		std::cout << "\033[1;34m" << "int: " << "\033[0m" << "overflow" << std::endl;
		return ;
	}
	if (value > 31 && value < 127)
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "\033[1;34m" << "int: " << "\033[0m" << value << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void	double_converter(std::string str)
{
	double	value;
	bool	overflow = false;

	value = strtod(str.c_str(), NULL);
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		overflow = true;
	if (value > std::numeric_limits<double>::max() || value < -std::numeric_limits<double>::max()) {
		std::cout << "\033[1;34m" << "double: " << "\033[0m" << "overflow" << std::endl;
		std::cout << std::strerror(errno) << std::endl;
		return ;
	}
	if (value >= 32 && value < 127)
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if (!overflow)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << "\033[1;31m" << " (overflow)" << "\033[0m" << std::endl;
	std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	std::cout << "\033[1;34m" << "double: " << "\033[0m" << value << ".0" << std::endl;
}

void	double_converter(std::string str, bool)
{
	double	value;
	bool	overflow = false;

	value = strtod(str.c_str(), NULL);
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		overflow = true;
	if (value > std::numeric_limits<double>::max() || value < -std::numeric_limits<double>::max()) {
		std::cout << "\033[1;34m" << "double: " << "\033[0m" << "overflow" << std::endl;
		std::cout << std::strerror(errno) << std::endl;
		return ;
	}
	if (value >= 32 && value < 127)
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if (!overflow)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << "\033[1;31m" << " (overflow)" << "\033[0m" << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "\033[1;34m" << "double: " << "\033[0m" << value << std::endl;
}

void	float_converter(std::string str)
{
	float	value;
	bool	overflow = false;

	value = strtof(str.c_str(), NULL);
	if (static_cast<long int>(value) > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		overflow = true;
	if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max()) {
		std::cout << "\033[1;34m" << "float: " << "\033[0m"<< "overflow" << std::endl;
		std::cout << std::strerror(errno) << std::endl;
		return ;
	}
	if (value >= 32 && value < 127)
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if (!overflow)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << "\033[1;31m" << " (overflow)" << "\033[0m" << std::endl;
	std::cout << "\033[1;34m" << "float: " << "\033[0m"<< value << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void	float_converter(std::string str, bool)
{
	float	value;
	bool	overflow = false;

	value = strtof(str.c_str(), NULL);
	if (static_cast<long int>(value) > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		overflow = true;
	if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max()) {
		std::cout << "\033[1;34m" << "float: " << "\033[0m"<< "overflow" << std::endl;
		std::cout << std::strerror(errno) << std::endl;
		return ;
	}
	if (value >= 32 && value < 127)
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if (!overflow)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << "\033[1;31m" << " (overflow)" << "\033[0m" << std::endl;
	std::cout << "\033[1;34m" << "float: " << "\033[0m" << value << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void	char_converter(char c)
{
	std::cout << "\033[1;34m" << "char: " << "\033[0m" << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	convert(int type, std::string str)
{
	if (type < 0 || !get_sign(str)) {
		std::cout << "Invalid format for string to be converted" << std::endl;
		return ;
	}
	switch (type)
	{
		case 0:
			return (int_converter(str));
		case 1:
			return (double_converter(str));
		case 2:
		case 3:
			return (float_converter(str));
		case 5:
			return (double_converter(str, true));
		case 7:
			return (float_converter(str, true));
		case 8:
			return (char_converter(str[1]));
		default:
			break;
	}
}

bool	check_char(std::string str)
{
	if (str.length() == 3)
		if (str[0] == '\'')
			if (str[2] == '\'')
				return (convert(8, str), true);
	return false;
}

bool is_expection(std::string str)
{
	if (str == "nan" || str == "nanf" || str == "inf" || str == "inff" || str == "-inf" || str == "+inf" || str == "+inff" || str == "-inff")
		return (true);
	return (false);
}

void	do_exception(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nan" || str == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inf" || str == "inf" || str == "inff" || str == "+inff")
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	std::string	str = av[1];

	if (is_expection(str))
		do_exception(str);
	else
	{
		errno = 0;
		if (!check_char(str))
			convert(get_type(str), str);
	}
	return (0);
}
