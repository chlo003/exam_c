/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 11:48:13 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/03 14:39:04 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] = 'A' + 'Z' - argv[1][i];
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = 'a' + 'z' - argv[1][i];
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}