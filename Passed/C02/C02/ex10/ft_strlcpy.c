/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:44:03 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/20 22:12:01 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len_src);
}

#include <stdio.h>
int main (void)
{
	char src[] = "777777777777777777";
	char dest[10];
	printf("%u\n", ft_strlcpy(dest, src,9));
	return (0);
}