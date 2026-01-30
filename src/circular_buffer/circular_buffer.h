#ifndef CIRCULAR_BUFFER_H
# define CIRCULAR_BUFFER_H

//includes
#include <stdlib.h>
#include <stdbool.h>
#include "libft.h"

//structs
typedef struct s_circular_buffer
{
	size_t	capacity;
	size_t	head;
	size_t	tail;
	size_t	count;
	int		*val;
} t_circular_buffer;

//declarations
int		cb_init(t_circular_buffer	*cb, size_t	capacity);
bool	cb_is_empty(t_circular_buffer	cb);
bool	cb_is_full(t_circular_buffer	cb);
int		cb_push_front(t_circular_buffer	*cb, int	elem);
int		cb_push_back(t_circular_buffer	*cb, int	elem);
int		cb_pop_front(t_circular_buffer	*cb, int	*elem);
int		cb_pop_back(t_circular_buffer	*cb, int	*elem);
void	cb_destroy(t_circular_buffer	*cb);

#endif
