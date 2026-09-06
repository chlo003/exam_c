/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 18:05:58 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/05 16:15:54 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double(char *str, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == str[pos])
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
			if (!is_double(argv[1], i))
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
					{
						write(1, &argv[1][i], 1);
						break ;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
