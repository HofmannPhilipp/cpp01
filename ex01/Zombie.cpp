/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:12:06 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/08 09:50:29 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	this->name = name;
}
Zombie::Zombie( void ) {
	this->name = "Defaulty";
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " died 💀" << std::endl;
}

void	Zombie::setName( std::string name) {
	this->name = name;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}