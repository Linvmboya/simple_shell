#include "shell.h"

/**
 * _realloc - function that resizes a block of memory
 * @ptr: the memory block to be resizes
 * @old_size: the current number of bytes occupied by ptr
 * @new_size: the new number of bytes to be occupied by ptr
 * Return: new address of ptr, otherwise NULL on failure
 */
void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	char *buffer;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr)
		free(ptr);
	buffer = malloc(new_size);
	if (old_size < new_size)
	{
		buffer = _strcpy((char *)buffer, (char *)ptr, old_size);
		free(ptr);
	}
	else
	{
		buffer = _strcpy((char *)buffer, (char *)ptr, new_size);
		free(ptr);
	}
	return (buffer);
}
