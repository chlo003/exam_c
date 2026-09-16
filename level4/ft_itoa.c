#include <stdlib.h>
#include <stdio.h>

int	count(int nb)
{
	int	t = 0;

	if (nb < 0)
		t += 1; 
	else if (nb == 0)
		return (1);
	while (nb != 0)
	{
		printf("COUNT \n");

		nb = nb / 10;
		t++;
	}
	return (t);
}

char	*ft_itoa(int nbr)
{
	char	*new;
	int		len;
	int		i = 0;

	len = count(nbr);
	new = malloc(sizeof(char) * (len + 1));
	new[len] = '\0';
	if (nbr < 0)
	{
		new[0] = '-';
		i = 1;
		nbr *= -1;
	}
	while (len-- > i)
	{
	// 	printf("CHAINE \n");
	// 	printf("%c", nbr % 10 + '0');
		new[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (new);
}

int main(void)
{
	printf("%s", ft_itoa(-123));
	return (0);
}