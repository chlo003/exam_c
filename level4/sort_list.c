/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 17:37:24 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/14 18:35:14 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		tmp;
	t_list	*first;

	first = lst;
	while (lst->next != NULL)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = first;
		}
		else
			lst = lst->next;
	}
	return (first);
}

int cmp(int a, int b)
{
	return (a <= b);
}

int	main(void)
{
	t_list	*test;
	t_list	*duo;
	t_list	*trio;
	int		p = 5;

	test = malloc(sizeof(t_list));
	duo = malloc(sizeof(t_list));
	trio = malloc(sizeof(t_list));

	test->data = 7;
	test->next = duo;

	duo->data = 6;
	duo->next = trio;

	trio->data = 5;
	trio->next = NULL;

	sort_list(test, cmp);
	// printf("%d %d %d", test->data, duo->data, trio->data);

	while (test)
	{
		printf("%d", test->data);
		test = test->next;
	}
	return (0);
}