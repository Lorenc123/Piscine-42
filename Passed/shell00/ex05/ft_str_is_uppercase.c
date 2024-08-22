/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:26:23 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/06 16:42:48 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

// int main(void)
// {
//     char	input[] = "A";
//     int result =ft_str_is_uppercase(input);
//     printf("%d\n", result);
//     return (0); 
// }
