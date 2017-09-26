#include <stdio.h>

char maiusculo(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - ('a'-'A');
	}
	return c;
}

int main()
{
	char letra = 'a' - 32;

	printf("%c\n", letra);
}