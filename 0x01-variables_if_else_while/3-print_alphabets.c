#include <stdio.h>

/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char calpha[26] = "abcdefghijklmnopqrstuvwxyz";
	char salpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a = 0;
	int n = 0;
		for (a = 0; a < 26; a++)
		{
			putchar(calpha[a]);
		}
		putchar('\n');
	for (n = 0; a < 26; n++)
	{
		putchar(salpha[n]);
	}
return (0);
}

