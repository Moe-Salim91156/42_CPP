/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:05:15 by msalim            #+#    #+#             */
/*   Updated: 2025/08/12 16:28:22 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	string_replace(std::string s1, std::string s2, std::string input)
{

	size_t	pos = 0;
	std::cout << "input before is : " << input << std::endl ;
	pos = input.find(s1);
	while (pos != std::string::npos)
	{
		//search and erase
		input.erase(pos,s1.length()); 
		input.insert(pos,s2);
		pos = input.find(s1);
	}	
	std::cout << "input now is : " << input << std::endl ;
	return (input);
}

int	main(int ac , char **av)
{
	if (ac == 4)
	{
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string input;
		std::ifstream infile(av[1]);
		std::string filename = std::string (av[1]) + ".replace";

		if (!infile)
		{
			std::cerr << "error opening infile" << std::endl;
			return(1);
		}
		std::ofstream outfile(filename.c_str(), std::ofstream::out);
		if (!outfile)
		{
			if (infile)
				infile.close();
			std::cerr << "error opening outfile" << std::endl;
			return(1);
		}
		while (getline(infile,input))
		{
			input = string_replace(s1,s2,input);
			outfile << input;
		}
		infile.close();
		outfile.close();
	}
       	return (0);
}
