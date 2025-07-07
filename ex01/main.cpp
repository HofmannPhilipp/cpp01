/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:03:31 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/07 13:12:47 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*horde	= NULL;
	int		size	= 5;

	horde = zombieHorde(size, "Hordy");
	if (!horde)
		return 0;
	for (int i = 0; i < size; i++) {
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}