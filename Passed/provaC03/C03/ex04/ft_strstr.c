/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:22:53 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/19 15:10:24 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			s1 = str;
			s2 = to_find;
			while (*s1 == *s2 && *s2 != '\0')
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
// #include <stdio.h>
// int main (void){
//     char str[] = "CA BONE MA SHQIPE";
//     char to_find[] = "SHQIPE";
//     char *result;
// 	 printf("%s",ft_strstr(str, to_find));
//     return (0);
// }
