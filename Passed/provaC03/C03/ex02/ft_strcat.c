/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:04:14 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/08 17:46:18 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*temp)
	{
		temp++;
	}
	while (*src)
	{
		*temp = *src;
		temp++;
		src ++;
	}
	*temp = '\0';
	return (dest);
}
// #include <stdio.h>
//  int main (void)
//  {
//    char dest[20] ="gtr";
//    char src[] = "hh";
//    ft_strcat(dest, src);
//    printf("%s", dest);
//  }