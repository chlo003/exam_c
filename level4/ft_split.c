#include <stdlib.h>
#include <stdio.h>

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

char	*ft_strdup(const char *s1)
{
	size_t	i = 0;
	size_t	len;
	char	*copy;

	len = 0;
	while (s1[len] && is_space(s1[i]) != 1)
		len++;
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len && is_space(s1[i]) != 1)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char	*str)
{
	int		i;
	int		j;
	char	**new;

	i = 0;
	j = 0;
	new = malloc(sizeof(char) * 10000);
	while (str[i])
	{
		if (is_space(str[i]) == 1 && str[i] != '\0')
			i++;
		else if (is_space(str[i]) != 1)
		{
			new[j] = ft_strdup(str + i);
			while (str[i] && is_space(str[i]) != 1)
				i++;
			j++;
		}
	}
	new[j] = NULL;
	return (new);
}

int main(int ac, char **av)
{
	int	i = 0;
	(void)ac;
	char **split = ft_split(av[1]);

	while (split[i])
	{
		printf("%d\t%s\n", i, split[i]);
		i++;
	}
	return (0);
}