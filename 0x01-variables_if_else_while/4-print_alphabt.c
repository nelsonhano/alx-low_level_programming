#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * follwer by a new line, except q and e
 * Return: Always 0
 */
int main(void)

{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'c' || alp == 'y' || alp == 'o')
			continue;

		putchar(alp);
	}

	putchar('\n');

	return (0);
}
