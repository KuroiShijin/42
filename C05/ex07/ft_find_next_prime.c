/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 03:06:54 by kdo               #+#    #+#             */
/*   Updated: 2022/07/28 17:44:10 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if ((nb % 2 == 0) || (nb < 2))
		return (0);
	i = 3;
	while (i <= 46340)
	{
		if ((nb % 2 == 0) && (nb != i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (!i)
	{
		i = ft_is_prime(nb);
		if (!i)
			nb++;
	}
	return (nb);
}
