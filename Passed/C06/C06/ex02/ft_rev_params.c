/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 20:14:03 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/22 13:12:50 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	arg;

	arg = argc -1;
	while (arg > 0)
	{
		index = 0;
		while (argv[arg][index] != '\0')
		{
			write(1, &argv[arg][index], 1);
			index++;
		}
		write(1, "\n", 1);
		arg--;
	}
}
