/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:10:49 by amercier          #+#    #+#             */
/*   Updated: 2025/12/27 17:35:40 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_stack
{
	size_t maxsize;
} t_stack;

int main()
{
	t_stack stack;

	stack.maxsize = 10;
	printf("%zu\n", stack.maxsize);
}
