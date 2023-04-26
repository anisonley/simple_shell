#include "shell.h"

/**
 * bfree - frees a pointer and sets its address to NULL.
 * @ptr: a pointer to be freed.
 *
 * Return: 1 if the memory is freed, 0 otherwise.
 */
int bfree(void **ptr)
{
	if (ptr != NULL && *ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
return (0);
}
