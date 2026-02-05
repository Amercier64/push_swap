/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:27:39 by amercier          #+#    #+#             */
/*   Updated: 2026/02/05 16:49:13 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	safe_atoi(const char *str, int *res)
{
	size_t	i;
	int		sign;

	sign = 1;
	i = 0;
	*res = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		*res = *res * 10 + str[i] - '0';
		if (res < 0)
			return (2);
		i++;
	}
	*res = *res * sign;
	return (0);
}
