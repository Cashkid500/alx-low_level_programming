#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = "_putchar";
	int i = 0;
	int s = sizeof(a) / sizeof(char);

	while ( a[i] < s)
	{
		putchar(a[i]);
		i++;
	}
	putchar('\n');
}
