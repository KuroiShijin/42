/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:45:24 by kdo               #+#    #+#             */
/*   Updated: 2022/07/26 13:49:59 by kdo              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define EVEN_MSG  "I have an even number of arguments."
# define ODD_MSG  "I have an odd number of arguments."
# define SUCCESS  0
# define TRUE  0
# define FALSE  1
# define EVEN(i) i % 2 == 0

#endif
