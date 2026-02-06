/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:27:39 by amercier          #+#    #+#             */
/*   Updated: 2026/02/06 18:44:23 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	digit(char c);
static int			check_sign(char c, int *sign);

int					safe_atoi(const char *str, int *res)
{
	int	i;
	int	sign;
	int	new;

	i = check_sign(str[0], &sign);
	*res = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			*res = *res * sign;
			return (1);
		}
		new = *res * 10;
		if (new / 10 != *res)
			return (2);
		*res = new + digit(str[i]);
		if (*res < 0 && !(*res == -2147483648 && sign == -1))
			return (2);
		i++;
	}
	*res = *res * sign;
	return (0);
}

static int			check_sign(char c, int *sign)
{
    *sign = 1 - 2 * (c == '-');
    return (c == '+' || c == '-');
}

static inline int	digit(char c)
{
	return (c - '0');
}
