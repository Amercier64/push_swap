#ifndef DEQUE_H
# define DEQUE_H

//includes
/* #include <stdlib.h> */
/* #include <stdbool.h> */
/* #include "libft.h" */
# include "circular_buffer.h"

//structs
typedef struct s_deque
{
	t_circular_buffer cb;
} t_deque;

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
