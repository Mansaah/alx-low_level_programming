#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - Function that allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: returns a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int tracker;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)	
	{
		return (NULL);
	}
	tracker = 0;
	while (tracker < nmemb * size)
	{
		ptr[tracker] = 0;
		tracker++;
	}
	return (ptr);
}
