/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:04:13 by kdo               #+#    #+#             */
/*   Updated: 2022/07/27 20:19:00 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size <= 0)
		return (0);
	while (src[j] && j < (size - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
