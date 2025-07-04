/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:05:53 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/04 13:34:12 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>


class Zombie {
	private:
	std::string	name;
	
	public:
	Zombie( std::string name );
	~Zombie( void );
	void	announce( void );
	
};

void	randomChump ( std::string name);
Zombie*	newZombie( std::string name);

#endif