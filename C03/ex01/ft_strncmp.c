/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:10:37 by kdo               #+#    #+#             */
/*   Updated: 2022/07/27 20:28:26 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		j++;
	}
	if (i < j)
		return (-1);
	else if (i == j)
		return (0);
	else
		return (1);
}
