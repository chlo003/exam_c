/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 21:24:22 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/03 21:24:23 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	main(int argc, char **argv)
{
	int	i = 0;
	char *str = argv[1];

	if (argc == 2)
	{
		while (str[i])
			i++;
		i--;
		while (((str[i] == 32) || (str[i] == 9)) && i >= 0)
			i--;
		while ((str[i] != 32) && (str[i] != 9) && i >= 0)
			i--;
		i++;
		while (str[i] && (str[i] != 32 && str[i] != 9))
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}