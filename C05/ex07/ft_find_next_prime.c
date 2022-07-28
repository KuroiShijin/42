/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 03:06:54 by kdo               #+#    #+#             */
/*   Updated: 2022/07/28 01:41:39 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	else if (nb <= 3 || nb == 5 || nb == 7)
		return (1);
	else if ((nb % 2 == 0) || (nb % 3 == 0) || (nb % 5 == 0) || (nb % 7 == 0))
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
