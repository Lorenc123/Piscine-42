/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqorri <lqorri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:02:00 by lqorri            #+#    #+#             */
/*   Updated: 2024/08/18 21:30:09 by lqorri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)

{
	int	index;
	int	arg;

	arg = 1;
	while (arg < argc)
	{
		index = 0;
		while (argv[arg][index])
		{
			write(1, &argv[arg][index], 1);
			index++;
		}
		write(1, "\n", 1);
		arg++;
	}
}
