/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:21:24 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/08 11:03:54 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {};
Weapon::Weapon(std::string type)
{
	this->type = type;
};
Weapon::~Weapon(void) {};

std::string Weapon::getType(void)
{
	return this->type;
}
void Weapon::setType(std::string type)
{
	this->type = type;
}