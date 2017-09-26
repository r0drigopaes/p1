#include <stdio.h>

#define MAX 1000

int main()
{
	int n, i, sorteado, pos;
	int a[MAX] = {0};
	scanf("%d", &n);

	pos = 0;
	for (i = 0; i < (n-1) ; ++i)
	{
		scanf("%d", &sorteado);

		while (sorteado)
		{
			if (a[pos] == 0)
			{
				sorteado --;
			}

			if (pos == n-1)
			{
				pos = 0;
			}
			else
			{
				pos ++;
			}
		}
		// posição anterior saiu da brincadeira
		if (pos == 0)
		{
			printf("Saiu o %d\n", n-1);
			a[n-1] = -1;
		}
		else
		{
			printf("Saiu o %d\n", pos -1);
			a[pos-1] = -1;
		}
	}
	

	return 0;
}