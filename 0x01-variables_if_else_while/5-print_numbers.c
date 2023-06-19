#include <stdio.h>

/**
* main - Prints numbers from 0 to 9.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int b = 0;

	for (b = 0; b < 10; b++)
	{
		printf("%d", a[b]);
	}
	return (0);
}

