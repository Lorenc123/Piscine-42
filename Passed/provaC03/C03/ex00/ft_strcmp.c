/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:50:08 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/08 20:28:24 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// int main()
// {
//      printf("\n%d",ft_strcmp ("heilbronn" , "jfhjgfh"));
//      printf("\n%d",ft_strcmp ("hel" , "heilbronn"));
//      printf("\n%d",ft_strcmp ("" , "heilbronn"));
//      printf("\n%d",ft_strcmp ("hello world" , "helloworld"));
//      printf("\n%d",ft_strcmp ("hello world" , "hello world"));
// }
