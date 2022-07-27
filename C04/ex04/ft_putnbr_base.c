/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:27:33 by kdo               #+#    #+#             */
/*   Updated: 2022/07/28 00:48:27 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_all_base(int nb)
{
	char	c;
	int		n;

	n = 10;
	c = 'A';
	if (nb <= 9)
		ft_putchar(nb + '0');
	while (nb > 9 && n <= 36)
	{
		if (nb == n)
			ft_putchar(c);
		c++;
		n++;
	}
}

void	ft_putnbr(int nb, int base)
{
	if (nb >= 0 && nb < base)
	{
		ft_all_base(nb);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1), base);
	}
	else
	{
		ft_putnbr(nb / base, base);
		ft_putnbr(nb % base, base);
	}
}

int	ft_error(char *base, int len_base)
{
	int	i;
	int	j;

	i = 0;
	if (len_base <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = 0;
		while (base[i + j])
		{
			if (base[i + j] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = 0;
	while (base[len_base])
	{
		len_base++;
	}
	if (ft_error(base, len_base))
		ft_putnbr(nbr, len_base);
}

int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	return (0);
}
