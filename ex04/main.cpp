/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:03:31 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/09 14:59:58 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

bool isValidParameters(const std::string &filename, const std::string &s1, const std::string &s2)
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

void replace(std::ifstream &infile, std::ofstream &outfile, const std::string &s1, const std::string &s2)
{
	std::string line;
	while (std::getline(infile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		outfile << line << '\n';
	}
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

	replace(infile, outfile, s1, s2);
	infile.close();
	outfile.close();
	return 0;
}