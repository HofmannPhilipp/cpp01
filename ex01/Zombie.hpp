/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:05:53 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/07 13:03:45 by phhofman         ###   ########.fr       */
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
	Zombie( void );
	~Zombie( void );
	void	announce( void );
	void	setName( std::string name );
};

Zombie*	zombieHorde( int N, std::string name );

#endif