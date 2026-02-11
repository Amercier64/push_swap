/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:11:50 by amercier          #+#    #+#             */
/*   Updated: 2026/02/10 15:35:11 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

size_t	count_words(char *str, char sep)
{
	size_t	word_count;
	bool	new_word;

	word_count = 0;
	new_word = true;
	while (*str)
	{
		if (*str == sep)
			new_word = true;
		else if (new_word)
		{
			word_count++;
			new_word = false;
		}
		str++;
	}
	return (word_count);
}

