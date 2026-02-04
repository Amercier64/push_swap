/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_str.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:26:44 by amercier          #+#    #+#             */
/*   Updated: 2026/02/04 19:13:25 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_STR_H
# define DYN_STR_H

//libs
# include <assert.h> //REMOVE ME
# include "ft_str.h"

//structs
typedef struct s_dyn_str
{
	size_t	size;
	char	*val;
}	t_dyn_str;

//declarations
int	str_append(t_dyn_str *dest, const char *src);

#endif
