/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:27:33 by kdo               #+#    #+#             */
/*   Updated: 2022/07/28 09:40:59 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	lbase;

	lbase = ft_strlen(base);
	if (ft_error(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(nbr * (-1), base);
	}
	else if (nbr >= lbase)
	{
		ft_putnbr_base(nbr / lbase, base);
		ft_putnbr_base(nbr % lbase, base);
	}
	else
		ft_putchar(base[nbr]);
}
