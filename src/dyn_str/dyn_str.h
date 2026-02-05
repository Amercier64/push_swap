/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_str.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:26:44 by amercier          #+#    #+#             */
/*   Updated: 2026/02/04 21:06:49 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_STR_H
# define DYN_STR_H

//libs
#include <assert.h> //REMOVE ME
# include "ft_str.h"

//structs
typedef struct s_dyn_str
{
	size_t	size;
	size_t	len;
	char	*val;
}	t_dyn_str;

//declarations
int	str_append(t_dyn_str *dest, const char *src);
int	str_reserve(t_dyn_str *str, size_t wanted);
int	str_init(t_dyn_str *str, size_t size);

#endif
