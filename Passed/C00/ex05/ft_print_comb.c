/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 21:14:52 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/19 22:20:04 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				if (x < y && y < z)
				{
					ft_putchar(x, y, z);
					if (x != '7' || y != '8' || z != '9')
						write(1, ", ", 2);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}

// int main(void)
// {
//     ft_print_comb();
//     return 0;
// }