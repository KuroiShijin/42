/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:00:48 by kdo               #+#    #+#             */
/*   Updated: 2022/07/12 18:32:50 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (size -1))
	{
		j = 0;
		while (j < (size -1))
		{
			if (tab[j] >= tab[j +1])
			{
				temp = tab[j +1];
				tab[j +1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
