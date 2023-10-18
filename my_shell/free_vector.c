#include "shell.h"

/**
 * free_vector - frees memory allocated to vector
 * @v: struct vector to free
 *
 */
void free_vector(vector_t *v)
{
	if (v)
	{
		free(v->name);
		free(v->owner);
		free(v);
	}
}
