/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:04:13 by kdo               #+#    #+#             */
/*   Updated: 2022/07/19 18:05:52 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	if (size != 0)
	{
		while (src[j] != '\0' && (j <= (size - 1)))
		{
			dest[j] = src[j];
			j++;
		}
	}
	while (src[i] != '\0')
	{
		i++;
	}
	dest[j] = '\0';
	return (i);
}

#include <string.h>

int	main(void)
{
	char dest[2] = "";
	char dest2[2] = "";

	printf("%u\n", ft_strlcpy(dest, "bateau", 7));
	printf("%s\n", dest);
	printf("%lu\n", strlcpy(dest2, "bateau", 7));
	printf("%s\n", dest);
}
