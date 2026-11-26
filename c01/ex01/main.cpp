/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalrafa <zaalrafa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 17:04:07 by zaalrafa          #+#    #+#             */
/*   Updated: 2026/11/25 17:36:02 by zaalrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int n = 5;
	Zombie *ptr = zombieHorde(n, "yoo");
	int i = 0;
	while (i < n)
	{
		ptr[i].announce();
		i++;
	}
	delete[] ptr;
}