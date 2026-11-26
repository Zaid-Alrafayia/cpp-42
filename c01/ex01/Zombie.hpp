/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalrafa <zaalrafa@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 16:41:53 by zaalrafa          #+#    #+#             */
/*   Updated: 2026/11/25 17:25:35 by zaalrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <vector>
class Zombie
{
  public:
	void announce(void);
	std::string getName();
	void setName(std::string name);

	~Zombie();

  private:
	std::string _name;
};

Zombie	*zombieHorde(int n, std::string name);

#endif