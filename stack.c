typedef struct s_rotational_stack
{
	t_circular_buffer cb;
} t_rotational_stack;

/* The "Pragmatic" API:
   - stack_push: Uses cb.head to insert
   - stack_pop:  Decrements cb.head (wrapped) to retrieve
   - stack_rotate: Simply increments/decrements BOTH head and tail 
                   indices without moving any data in memory.
*/
