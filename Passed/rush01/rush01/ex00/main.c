/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkneifel <tkneifel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:44:33 by mrostock          #+#    #+#             */
/*   Updated: 2024/08/11 21:39:07 by tkneifel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define OFFSET_TOP 0
#define OFFSET_BOTTOM 4
#define OFFSET_LEFT 8
#define OFFSET_RIGHT 12

int		check_possible(int x, int y, char n, char (*grid)[4][4]);
int		check_valid(int x, int y, char grid[4][4], char *constraint);

void	to_array(char *str, char *array)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		array[i] = str[i * 2] - '0';
		i++;
	}
}

void	print_grid(char grid[4][4])
{
	int		i;
	int		j;
	char	c;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (i < 3)
				write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

void	solve(unsigned char x, unsigned char y, char (*grid)[4][4],
		char (*constraint)[16])
{
	unsigned char	i;

	i = 1;
	while (i < 5)
	{
		if (check_possible(x, y, i, grid))
		{
			(*grid)[x][y] = i;
			if (check_valid(x, y, *grid, *constraint))
			{
				solve((x + 1) % 4, (y) + (x + 1) / 4, grid, constraint);
			}
			else
			{
				(*grid)[x][y] = 0;
			}
		}
		i++;
	}
	if ((*grid)[(x + 1) % 4][(y) + (x + 1) / 4] == 0 && (x != 4 || y != 4))
	{
		(*grid)[x][y] = 0;
	}
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	char	grid[4][4];
	char	constraint[16];

	if (ac == 2 && str_len(av[1]) == 31)
	{
		to_array(av[1], constraint + OFFSET_TOP);
		to_array(av[1] + 8, constraint + OFFSET_BOTTOM);
		to_array(av[1] + 16, constraint + OFFSET_LEFT);
		to_array(av[1] + 24, constraint + OFFSET_RIGHT);
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
	solve(0, 0, &grid, &constraint);
	if (grid[3][3] == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	print_grid(grid);
}
