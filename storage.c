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

void	storage_free(t_storage *storage)
{

}
