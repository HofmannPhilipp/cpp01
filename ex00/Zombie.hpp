/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phhofman <phhofman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:05:53 by phhofman          #+#    #+#             */
/*   Updated: 2025/07/04 10:10:08 by phhofman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie {
	private:
		std::string	name;
		
	public:
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
		
};