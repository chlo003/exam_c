/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 16:16:02 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/05 17:39:09 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!is_double(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		j = 0;
		while (argv[2][j])
		{
			if (!is_double(argv[2], argv[2][j], j))
			{
				if (!is_double(argv[1], argv[2][j], i))
					write(1, &argv[2][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}