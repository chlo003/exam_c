/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:41:12 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/03 15:44:12 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	char *pos = argv[1];

	if (argc == 2)
	{
		while (pos[i])
		{
			if (pos[i] == '_')
			{
				i++;
				pos[i] = pos[i] - 32;
			}
			write(1, &pos[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}