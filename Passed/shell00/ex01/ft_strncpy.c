/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:09:17 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/06 16:40:46 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src [i] && i < n)
	{
		dest [i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[0] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "futgdyewyfwefw";
// 	char	dest[20];
//     ft_strncpy(dest, src, 10);
//     printf("%s\n", dest);
//     return 0;
// }