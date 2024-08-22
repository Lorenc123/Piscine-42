/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:14:25 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/18 11:29:17 by mkulijev         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	ft__atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = 10 * result + (str[i]);
		i++;
	}
	if ((temp * sign) < 0)
		return (1);
	return (result);
}
