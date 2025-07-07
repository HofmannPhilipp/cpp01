/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:03:31 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/07 14:18:50 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "Memory address of brain			: " << &brain		<< std::endl;
	std::cout << "Memory address held by stringPTR	: " << &stringPTR	<< std::endl;
	std::cout << "Memory address held by stringREF	: " << &stringREF	<< std::endl;

	std::cout << std::endl;

	std::cout << "Value of brain				: " << brain			<< std::endl;
	std::cout << "Value pointed to by stringPT		: " << *stringPTR	<< std::endl;
	std::cout << "Value pointed to by stringRE		: " << stringREF	<< std::endl;

	return 0;
}