/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 01:39:12 by kdo               #+#    #+#             */
/*   Updated: 2022/07/28 06:45:34 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	sqrt;

	sqrt = 1;
	if (nb > 0)
	{
		while (sqrt * sqrt < nb)
		{
			sqrt++;
		}
		if (sqrt * sqrt == nb)
			return (sqrt);
	}
	return (0);
}
