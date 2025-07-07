/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:35:06 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/07 13:02:53 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	if (N < 1)
		return NULL;

	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}
	return horde;
}