/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrostock <mrostock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:21:26 by mrostock          #+#    #+#             */
/*   Updated: 2024/08/11 20:24:59 by mrostock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define OFFSET_TOP 0
#define OFFSET_BOTTOM 4
#define OFFSET_LEFT 8
#define OFFSET_RIGHT 12

int		check_min_lr(char grid[4][4], char y, char check);
int		check_min_rl(char grid[4][4], char y, char check);
int		check_min_ud(char grid[4][4], char x, char check);
int		check_min_du(char grid[4][4], char x, char check);

int	check_valid(int x, int y, char grid[4][4], char *constraint)
{
	return (check_min_ud(grid, x, constraint[OFFSET_TOP + x])
		&& check_min_du(grid, x, constraint[OFFSET_BOTTOM + x])
		&& check_min_lr(grid, y, constraint[OFFSET_LEFT + y])
		&& check_min_rl(grid, y, constraint[OFFSET_RIGHT + y]));
}

int	check_possible(int x, int y, char n, char (*grid)[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((*grid)[i][y] == n)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if ((*grid)[x][i] == n)
			return (0);
		i++;
	}
	return (1);
}
