/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:13:05 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/04 13:36:50 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	// --- Stack allocation (automatically destroyed at end of scope) ---
	std::cout << "Creating zombie on stack:" << std::endl;
	{
		Zombie stackZombie("Stacky");
		stackZombie.announce();
	} // <- Zerstörung hier automatisch, Destructor wird aufgerufen

	std::cout << std::endl;

	// --- Heap allocation (manual destruction required) ---
	std::cout << "Creating zombie on heap:" << std::endl;
	Zombie* heapZombie = newZombie("Heapy");
	heapZombie->announce();
	delete heapZombie; // <- manuelles Löschen, sonst Memory Leak

	std::cout << std::endl;

	// --- Random chump (stack allocation, automatic destruction) ---
	std::cout << "Creating random zombie (randomChump):" << std::endl;
	randomChump("Randomy");

	return 0;
}