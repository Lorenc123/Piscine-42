/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:36:27 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/04 12:05:14 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	length;
	int	width;

	if (x < 1 || y < 1)
		return ;
	width = 1;
	while (width <= y)
	{
		length = 1;
		while (length <= x)
		{
			if ((length == 1 || length == x) && (width == 1 || width == y))
				ft_putchar('o');
			else if (width == 1 || width == y)
				ft_putchar('-');
			else if (length == 1 || length == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			length++;
		}
		ft_putchar('\n');
		width++;
	}
}
