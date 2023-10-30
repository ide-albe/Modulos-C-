/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-albe <ide-albe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:34:35 by ide-albe          #+#    #+#             */
/*   Updated: 2023/09/19 19:40:32 by ide-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int x = 1;
	while (x < argc)
	{
		std::string a = argv[x];
		for (unsigned long i = 0; i < a.length(); i++)
		{
			a[i] = std::toupper(a[i]);
		}
		std::cout << a;
		x++;
	}
	std::cout << std::endl;
}
