/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 16:07:50 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/04 16:07:51 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	char *pos = argv[1];

	if (argc == 2)
	{
		while (pos[i])
		{
			if (pos[i] >= 'A' && pos[i] <= 'Z')
			{
				write(1, "_", 1);
				pos[i] = pos[i] + 32;

			}
			write(1, &pos[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}