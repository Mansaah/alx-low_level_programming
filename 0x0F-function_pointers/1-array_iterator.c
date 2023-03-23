#include "function_pointers.h" /** * array_iterator - executes a function in all elements of an array * @array: array * @size: array size * @action: action performed on array elements */void array_iterator(int *array, size_t size, void (*action)(int)){	size_t i; 	if (size > 0 && action && array)	{		for (i = 0; i < size; i++)		{			action(array[i]);		}	}
}
