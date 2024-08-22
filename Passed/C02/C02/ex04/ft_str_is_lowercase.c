/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 21:24:40 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/06 16:42:01 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	input[] = "a";
//     int result = ft_str_is_lowercase(input);
//     printf("%d\n", result);
//     return (0); 
// }
