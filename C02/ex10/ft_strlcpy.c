/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:04:13 by kdo               #+#    #+#             */
/*   Updated: 2022/07/21 05:43:11 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (src[j] != '\0' && j < (size - 1))
	{
		dest[j] = src[j];
		j++;
	}
	while (src[i] != '\0')
	{
		i++;
	}
	dest[j] = '\0';
	return (i);
}
