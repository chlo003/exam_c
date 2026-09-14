/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:46:03 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/14 17:36:25 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_remove_if(t_list **begin_list, int data_ref, int (*cmp)(int, int))
{
	t_list	*tmp;
	t_list	**node;

	node = begin_list;
	while (*node)
	{
		if (cmp(data_ref, (*node)->data) == 0)
		{
			tmp = *node;
			*node = (*node)->next;
			free(tmp);
		}
		else
			*node = (*node)->next;
	}
}

// int	cmp(int first, int second)
// {
// 	if (first == second)
// 		return (0);
// 	else
// 		return (1);
// }

// int	main(void)
// {
// 	t_list	*test;
// 	// t_list	*duo;
// 	int		p = 5;

// 	test = malloc(sizeof(t_list));
// 	// duo = malloc(sizeof(t_list));
// 	test->data = 5;
// 	// test->next = duo;

// 	// duo->data = 5;
// 	// duo->next = NULL;
// 	printf("%d", test->data);

// 	ft_list_remove_if(&test, 5, cmp);

// 	// printf("%d", test->data);
// 	return (0);
// }