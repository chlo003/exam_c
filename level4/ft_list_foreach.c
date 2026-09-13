/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 19:49:47 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/13 19:57:08 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	
}


int	main(void)
{
	t_list	*test;
	t_list	*duo;
	int		p = 5;

	test = malloc(sizeof(t_list));
	duo = malloc(sizeof(t_list));
	test->data = 5;
	test->next = duo;

	duo->data = 5;
	duo->next = NULL;

	printf("%d", ft_list_size(test));
	return (0);
}