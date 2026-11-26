/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalrafa <zaalrafa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 16:58:53 by zaalrafa          #+#    #+#             */
/*   Updated: 2026/11/25 17:32:02 by zaalrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	int i = 0;
	Zombie *horde = new Zombie[n];
	while (i < n)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}