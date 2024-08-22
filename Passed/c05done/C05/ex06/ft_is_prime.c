/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:37:15 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/14 12:20:45 by lqorri           ###   ########.fr       */
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

// #include <stdio.h>
// int main (void)
// {
//     printf("%i", ft_is_prime(10));
// }