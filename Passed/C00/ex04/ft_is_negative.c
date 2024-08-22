/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:46:32 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/01 21:16:51 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter;

	if (n < 0)
	{
		letter = 'N';
		write(1, &letter, 1);
	}
	else
	{
		letter = 'P';
		write(1, &letter, 1);
	}
}
