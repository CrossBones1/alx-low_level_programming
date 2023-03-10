#include "main.h"
#include <stdio.h>

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: Always 0
 */
void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
