/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:48:37 by amercier          #+#    #+#             */
/*   Updated: 2026/02/10 15:54:34 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

//libs
# include "ft_printf.h"

//structs
typedef enum	e_error
{
	SUCCESS = 0,
	ERR_ALLOC,
	ERR_INVAL,
	ERR_RANGE,
	ERR_ARGNUM
}	t_error;

//declarations
void	print_error(t_error err);
#endif
