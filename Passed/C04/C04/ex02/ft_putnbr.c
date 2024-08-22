/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:53:34 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/12 16:24:52 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb ;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

// int main(void) {
//     ft_putnbr(42);         
//     ft_putchar('\n');     
//     ft_putnbr(-1234);      
//     ft_putchar('\n');      
//     ft_putnbr(0);          
//     ft_putchar('\n');      
//     ft_putnbr(2147483647); 
//     ft_putchar('\n');      
//     ft_putnbr(-2147483648);
//     ft_putchar('\n');      

//     return 0;    }   