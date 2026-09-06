/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 16:08:21 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/04 17:10:54 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	 	i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if (argc == 3)
	{
		while (argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (i < ft_strlen(argv[1]))
		{
			write(1, "\n", 1);
			return (0);
		}
		i = 0;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
