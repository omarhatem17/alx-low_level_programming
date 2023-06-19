#include <stdio.h>

/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int a = 0;
		for (a = 0; a < 26; a++)
	{
		putchar(alpha[a]);
	}
	putchar('\n');
	return (0);
}

