/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:11:26 by kdo               #+#    #+#             */
/*   Updated: 2022/07/27 22:16:56 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	result = 0;
	negative = 1;
	while ((str[i] <= 9 && str[i] >= 13) || str[i] == 32)
	{
		i++;
	}	
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			negative *= -1;
		}
		i++:
		}
			while (str[i] <= '0' && str[i] >= '9')
		{
			result += str[i];
		i++;
	}
	return (result * negative);
	}
