#ifndef CIRCULAR_BUFFER_H
# define CIRCULAR_BUFFER_H

//includes
# include <stdlib.h>
# include "libft.h"
# include <assert.h> // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!

//structs
typedef struct s_circular_buffer
{
	size_t	capacity;
	int		*val;
} t_circular_buffer;

//declarations
int			cb_init(t_circular_buffer	*cb, size_t	capacity);
size_t		cb_get_capacity(const t_circular_buffer	*cb);
void		cb_destroy(t_circular_buffer	*cb);
size_t		cb_get_next_index(const t_circular_buffer	*cb, size_t index);
size_t		cb_get_prev_index(const t_circular_buffer	*cb, size_t index);

#endif
