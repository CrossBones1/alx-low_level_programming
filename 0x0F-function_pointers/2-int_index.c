#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, num;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		exit(0);
	for (i = 0; i < size; i++)
	{
		num = cmp(*(array + i));
		if (num != 0)
			return (i);
	}
	return (-1);
}
