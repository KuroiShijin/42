/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:16:13 by kdo               #+#    #+#             */
/*   Updated: 2022/07/20 20:35:54 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	sort;

	while (sort != 127)
	{
		i = 0;
		while (argv[i])
		{
			j = 0;
			if (argv[i][j] == sort)
			{
				while (argv[i][j])
				{
					write(1, &argv[i][j], 1);
					j++;
				}
				write(1, "\n", 1);
			}
			i++;
		}
		sort++;
	}
}
