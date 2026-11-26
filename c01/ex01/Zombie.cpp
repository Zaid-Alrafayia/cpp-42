/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalrafa <zaalrafa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 16:41:18 by zaalrafa          #+#    #+#             */
/*   Updated: 2026/11/25 17:16:33 by zaalrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
std::string Zombie::getName()
{
	return (_name);
}
void Zombie::setName(std::string name)
{
	_name = name;
}
Zombie::~Zombie()
{
	std::cout << _name << ": lost his brainz" << std::endl;
}