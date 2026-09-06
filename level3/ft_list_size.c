/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 21:32:12 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/05 22:07:20 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int	node;

	node = 0;
	while (begin_list)
	{
		node++;
		begin_list = begin_list->next;
	}
	return (node);
}

int	main(void)
{
	t_list	*test;
	t_list	*duo;
	int	p = 5;

	test = malloc(sizeof(t_list));
	duo = malloc(sizeof(t_list));
	test->data = 5;
	test->next = duo;

	duo->data = 5;
	duo->next = NULL;
	// printf("%d", p);
	printf("%d", ft_list_size(test));
	// return (0);
}