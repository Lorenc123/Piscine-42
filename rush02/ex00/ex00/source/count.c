/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulijev <mkulijev@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:40:17 by mkulijev          #+#    #+#             */
/*   Updated: 2024/08/18 21:42:13 by mkulijev         ###   ########.de       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	count_rows(const char filename)
{
	int	fd;
	int	byte;
	int	byte_reads;
	int	count;
	int	i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	i = 0;
	count = 0
	byte_read = read(fd, buffer, buffersize);
	while (byte_read > 0)
	{
		while (i < bytes_read)
		{
			if (buffer[i] == '\n')
				count++;
			i++;
		}
	}
	close(fd);
	return (count);
}
