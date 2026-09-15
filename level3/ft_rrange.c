#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
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
			tab[i++] = end;
			end--;
		}
	}
	else if (start > end)
	{
		tab = malloc(sizeof(int) * ((start - end) + 1));
		if (tab == NULL)
			return (NULL);
		while (start > end)
		{
			tab[i++] = end;
			end++;
		}
	}
	tab[i] = end;
	return (tab);
}

int	main(void)
{
	int	i = 0;
	int	s = 0;
	int	e = -3;
	int	*tab = ft_rrange(s, e);
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