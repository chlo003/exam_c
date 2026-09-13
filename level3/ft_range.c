/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 14:35:26 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/13 18:08:42 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int	i;

	i = 0;
	if (start == end)
	{
		tab = malloc(sizeof(int) * 1);
		if (tab == NULL)
			return (NULL);
	}
	else if (start < end)
	{
		tab = malloc(sizeof(int) * ((end - start) + 1));
		if (tab == NULL)
			return (NULL);
		while (start < end)
		{
			tab[i++] = start;
			start++;
		}
	}
	else if (start > end)
	{
		tab = malloc(sizeof(int) * ((start - end) + 1));
		if (tab == NULL)
			return (NULL);
		while (start > end)
		{
			tab[i++] = start;
			start--;
		}
	}
	tab[i] = end;
	return (tab);
}

int	main(void)
{
	int	i = 0;
	int	s = 1;
	int	e = 1;
	int	*tab = ft_range(s, e);
	int	len;

	if (s < e)
		len = e - s + 1;
	else if (s > e)
		len = s - e + 1;
	else 
		len = 1;
	while (i != len)
	{
		printf("%d ", tab[i]);
		i++;
	}
		return (0);
}