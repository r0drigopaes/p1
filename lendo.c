#include<stdio.h>

#define MAX 10

int main()
{
	int a[MAX];
	int x, i;
	int contador;

	for (i=0; i< MAX; ++i)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);

	// agora vamos procurar o x em a
	contador = 0;
	for (i = 0; i < MAX; ++i)
	{
		if (a[i] == x)
		{
			contador++;
		}
	}
	printf("%d\n",  contador);

	
	return 0;
}