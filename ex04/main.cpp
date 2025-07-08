/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:03:31 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/08 17:12:40 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

bool isValidParameters(std::string filename, std::string s1, std::string s2)
{
	if (filename.empty())
	{
		std::cerr << "Error: The filename cannot be empty." << std::endl;
		return false;
	}
	if (s1.empty())
	{
		std::cerr << "Error: The search string (s1) cannot be empty." << std::endl;
		return false;
	}
	if (s2.empty())
	{
		std::cerr << "Error: The search string (s2) cannot be empty." << std::endl;
		return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		std::cerr << "Usage: " << argv[0] << " <filename> <string_to_find> <string_to_replace>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (!isValidParameters(filename, s1, s2))
		return 1;

	std::ifstream infile(filename);
	if (!infile)
	{
		std::cerr << "Error: Could not open input file: " << filename << "\n";
		return 1;
	}

	std::ofstream outfile(filename + ".replace");
	if (!outfile)
	{
		infile.close();
		std::cerr << "Error: Could not open input file: " << filename << "\n";
		return 1;
	}
	std::string line;
	while (std::getline(infile, line))
	{
		line
	}
	infile.close();
	outfile.close();
	return 0;
}