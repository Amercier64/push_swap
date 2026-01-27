typedef struct s_circular_buffer
{
    t_storage storage;    // The base layer
    size_t head;           // Index for the next push
    size_t tail;           // Index for the oldest element
    size_t count;          // Current number of elements
} t_circular_buffer;

// Would include: cb_wrap_index, cb_is_full, cb_is_empty
