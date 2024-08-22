/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:30:47 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/15 18:06:20 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb <= 1)
		return (0);
	while (prime <= nb / 2)
	{
		if ((nb % prime) == 0)
			return (0);
		prime ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	
	if (nb < 2)
		nb = 2;
	while (!ft_is_prime(nb))
	{
		nb ++;
	}
	return (nb);
}

#include <stdio.h>
 int main(void)
 {
    printf("%i", ft_find_next_prime(7678785675965));
 }
