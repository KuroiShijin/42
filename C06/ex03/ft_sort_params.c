/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:16:13 by kdo               #+#    #+#             */
/*   Updated: 2022/07/28 09:27:22 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	sort(int argc, char **argv)
{
	int	i;
	int	j;


	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (ft_strcmp(argv[i], argv[j]) > 0)
		{
					
		}
	
	}
}


int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	sort;

	
	sort = 33;
	if (argc < 2)
		return (0);
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
