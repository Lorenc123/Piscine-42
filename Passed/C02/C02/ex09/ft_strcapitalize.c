/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:08:12 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/19 19:59:19 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !((str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'A' && str[i -1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "pi raki , mendoj per ty...";
// 	printf("%s\n", ft_strcapitalize(str));
// 	return (0);
// }
