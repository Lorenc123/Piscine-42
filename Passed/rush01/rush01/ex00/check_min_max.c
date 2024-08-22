/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrostock <mrostock@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:09:09 by mrostock          #+#    #+#             */
/*   Updated: 2024/08/11 20:16:46 by mrostock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_min_lr(char grid[4][4], int y, int check)
{
	int	i;
	int	previous;
	int	min;
	int	max;

	max = 0;
	min = 0;
	i = 0;
	previous = 0;
	while (i < 4)
	{
		if (grid[i][y] == 0)
		{
			max++;
			min -= 2;
		}
		if (grid[i][y] > previous)
		{
			min++;
			max++;
			previous = grid[i][y];
		}
		i++;
	}
	return (check <= max && check >= min);
}

int	check_min_rl(char grid[4][4], int y, int check)
{
	int	i;
	int	previous;
	int	min;
	int	max;

	max = 0;
	min = 0;
	i = 3;
	previous = 0;
	while (i >= 0)
	{
		if (grid[i][y] == 0)
		{
			max++;
			min -= 2;
		}
		if (grid[i][y] > previous)
		{
			min++;
			max++;
			previous = grid[i][y];
		}
		i--;
	}
	return (check <= max && check >= min);
}

// from south to north
int	check_min_du(char grid[4][4], int x, int check)
{
	int	i;
	int	previous;
	int	min;
	int	max;

	max = 0;
	min = 0;
	i = 3;
	previous = 0;
	while (i >= 0)
	{
		if (grid[x][i] == 0)
		{
			max++;
			min -= 2;
		}
		if (grid[x][i] > previous)
		{
			min++;
			max++;
			previous = grid[x][i];
		}
		i--;
	}
	return (check <= max && check >= min);
}

// from north to south
int	check_min_ud(char grid[4][4], int x, int check)
{
	int	i;
	int	previous;
	int	min;
	int	max;

	max = 0;
	min = 0;
	i = 0;
	previous = 0;
	while (i < 4)
	{
		if (grid[x][i] == 0)
		{
			max++;
			min -= 2;
		}
		if (grid[x][i] > previous)
		{
			min++;
			max++;
			previous = grid[x][i];
		}
		i++;
	}
	return (check <= max && check >= min);
}
