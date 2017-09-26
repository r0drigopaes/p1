#include <stdio.h>
#include <string.h>

int main()
{
	int numeros1[1000];
	int i, j;
	char c;
	

	i = 0;
	while (scanf("%d%c", &numeros1[i], &c) == 2)
	{
		++i;
		if (c == '\n')
		{
			break;
		}
		
	}



	for ( j = 0; j < i ; ++j)
	{
		printf("%d\n", numeros1[j]);
	}
}