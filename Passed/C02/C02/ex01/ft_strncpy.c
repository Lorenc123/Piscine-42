/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:09:17 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/19 19:27:38 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "futgdyewyfwefw";
// 	char	dest[100];
//     ft_strncpy(dest, src, 6);
//     printf("%s\n", dest);
//     return 0;
// }