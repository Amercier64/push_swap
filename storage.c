#include "storage.h"

typedef struct s_storage
{
	void	*buffer;
	size_t	capacity;
	size_t	element_size;
}  t_storage;
// Would include: storage_init, storage_get_offset, storage_free

int	storage_init(t_storage *storage, size_t capacity, size_t element_size)
{
	if (capacity == 0 || element_size == 0)
		return (1);
	storage->buffer = malloc(capacity * element_size);
	if (!storage.buffer)
		return (1);
	storage->capacity = capacity;
	storage->element_size = element_size;
	return (0);
}

void	*storage_get_offset(t_storage *storage, size_t index)
{
	return (char*)storage->buffer + (index * storage->element_size);
}

/* Writing the storage free function made me think about whether I should only
 * free the storage or the possible pointers stored by adding a del function
 * to the parameters. More on this design choice :
 * To dive deeper into these patterns, you should look into C Interface and Implementation and Data Structure Design. Here are the specific terms and resources to search for:

    "Type Erasure in C": This is the formal name for using void * to create generic containers. It’s the "opaque" style you're currently using.

    "Inlined vs. Out-of-line metadata": This covers whether you store information about the data (like its size) inside the buffer or in a separate header.

    "The C Interfaces and Implementations" (Book by David R. Hanson): This is considered the "Bible" for what you are doing. It specifically covers how to write clean, opaque C libraries using the void * pattern.

    "Value Semantics vs. Reference Semantics": This will help you decide if your library should copy the data into the buffer (Flat) or just store a reference to it (Indirection).
*/

void	storage_free(t_storage *storage)
{
	if (!storage || !storage->buffer)
		return ;
	free(storage->buffer);
	storage->buffer = NULL;
	storage->capacity = 0;
}
