/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:50:41 by kdo               #+#    #+#             */
/*   Updated: 2022/07/28 03:40:37 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	
	size = max - min;
	if (min >= max)
		range = NULL;
	else
		range = (int *)malloc(size * sizeof(int *));
}
