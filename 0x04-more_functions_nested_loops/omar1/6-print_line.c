#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 */
void print_line(int n)
{
	int a;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n;a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
