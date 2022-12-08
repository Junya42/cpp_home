/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <anremiki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:13:50 by anremiki          #+#    #+#             */
/*   Updated: 2022/08/10 08:35:18 by anremiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	std::string		line;
	std::string		buffer;
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::ifstream	file(av[1]);
	std::string result;
	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			buffer += line;
			buffer += "\n";
		}
		file.close();
		if (buffer.length() == 0)
		{
			std::cout << "The file is empty" << std::endl;
			return (0);
		}
		std::size_t found = 0;
		std::size_t last_found = 0;
		std::size_t save = 0;
		int	end = 1;
		while (end)
		{
			last_found = found;
			found = buffer.find(s1, found + 1);
			if (found != std::string::npos)
			{
				if (last_found == 0)
					result += buffer.substr(last_found, found);
				else if (last_found < found)
				{
					result += s2;
					line = buffer.substr((last_found + s1.size()), found - last_found - s1.size());
					result += line;
					save = found;
				}
				else
				{
					result += s2;
					line = buffer.substr((save + s1.size()));
					result += line;
					end = 0;
				}
				//std::cout << result << std::endl << std::endl << std::endl;
			}
		}
	}
	else
		std::cout << "Unable to open file" << std::endl;
	s1 = av[1];
	s1 += ".replace";
	std::ofstream	newfile(s1.c_str(), std::ofstream::out);
	if (newfile.is_open())
	{
		newfile << result;
		newfile.close();
	}
	else
		std::cout << "Unable to open file" << std::endl;
}
