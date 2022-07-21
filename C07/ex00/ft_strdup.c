/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 05:14:26 by kdo               #+#    #+#             */
/*   Updated: 2022/07/21 09:49:43 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *cpy;
	int	size;
	int	i;

	i = 0;
	size = st_strlen(src);
	cpy = malloc(size * sizeof(char));
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
