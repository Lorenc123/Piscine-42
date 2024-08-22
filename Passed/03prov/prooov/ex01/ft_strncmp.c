/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:11:52 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/08 17:42:24 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char )(s1[i]) - (unsigned char)(s2[i]));
}

//     #include <stdio.h>  
// int main (void)
//     {
//         char str1[] = "bbbbbbb";
//         char str2[] = "aaaaaaa"; 
//         int rezult1 = ft_strncmp(str1,str2, 4);
//         printf("%d\n", rezult1);
//         return (0);
//     }
