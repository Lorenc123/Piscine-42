/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:46:32 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/06 16:41:03 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "333";
// 	printf("%s - %d\n", str, ft_str_is_alpha(str));
// 	str = "ghfghfgh";
// 	printf("%s - %d\n", str, ft_str_is_alpha(str));
// 	return (0);
// }
