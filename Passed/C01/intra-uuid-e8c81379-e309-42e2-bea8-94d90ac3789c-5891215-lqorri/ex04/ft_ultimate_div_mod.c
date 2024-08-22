/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:30:58 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/04 21:55:54 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	div;
	int	mod ;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>

// int main ()
// {
//     int a=9;
//     int b=5;
//     ft_ultimate_div_mod(&a, &b);
//     printf("%d" " - " "%d", a, b);
//     return 0;
// }