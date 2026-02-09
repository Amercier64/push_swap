/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_safe_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:49:04 by amercier          #+#    #+#             */
/*   Updated: 2026/02/06 18:04:57 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	safe_atoi(const char *str, int *res);

int main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
	int n;
	int err;
	/* err = safe_atoi(argv[1], &n); */
	n = ft_atoi(argv[1]);
	printf("ft_atoi -> %d\n", n);
	err = safe_atoi(argv[1], &n);
	printf("safe_atoi -> %d\n"
			"err = %d\n",
			n, err);
}
