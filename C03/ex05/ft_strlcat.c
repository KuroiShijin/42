/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:04:59 by kdo               #+#    #+#             */
/*   Updated: 2022/07/19 17:17:18 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && i < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int	main(void)
{
	printf("%d\n", strlcat("bonjour", "test", 5));
	printf("%d\n", ft_strlcat("bonjour", "test", 5));
}
