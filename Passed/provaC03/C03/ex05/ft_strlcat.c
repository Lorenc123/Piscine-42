/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:28:35 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/20 21:34:21 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	len_dest = 0;
	len_src = 0 ;
	while (dest[len_dest] != '\0' && len_dest < size)
		len_dest ++;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	while (src[i] != '\0' && (len_dest + i) < (size - 1))
	{
		dest [len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

#include <stdio.h>

int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    // unsigned int size = sizeof(dest);

    // Thirrja e funksionit ft_strlcat
    unsigned int result = ft_strlcat(dest, src, 7);

    printf("Rezultati: %s\n", dest);
    printf("Gjatësia totale e stringut: %u\n", result);

    return 0;
}