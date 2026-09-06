/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlminga <chlminga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 15:30:24 by chlminga          #+#    #+#             */
/*   Updated: 2026/09/02 16:35:59 by chlminga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0)
			write(1, "fizz", 4);
		else if (nb % 5 == 0)
			write(1, "buzz", 4);
		else if (nb % 15 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_putnbr(nb);
		nb++;
		write(1, "\n", 1);
	}
	return (0);
}
