#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *array_range - Function that creates an array of integers
 * @min: min value of type int
 * @max: max value of type int
 * Return: returns pointers
 */
int *array_range(int min, int max)
{
	int *ptr;
	int arrs;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arrs = 0;
	while (min <= max)
	{
		ptr[arrs] = min;
		min++;
		arrs++;
	}
	return (ptr);
}
