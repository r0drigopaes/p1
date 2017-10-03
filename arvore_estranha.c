#include <stdio.h>
#include <stdlib.h>

#define li long int

li **a;

li maximo(li x, li y)
{
	return x>y ? x:y;
}

li altura(li i)
{
	if (i == -1)
	{
		return 0;
	}
	else
	{
		return 1 + maximo( altura(a[i][0]), altura(a[i][1]) );
	}
}

int main()
{
	li n, k, raiz, i, origem, esquerdo, direito;

	scanf("%ld%ld%ld", &n, &k, &raiz);
	a = (li **) malloc(n * sizeof(li *));
	for (i=0; i< n; ++i)
	{
		a[i] = (li *) malloc( 2 * sizeof(li) );
		a[i][0] = -1;
		a[i][1] = -1;
	}
	for (i = 0; i < k ; ++i)
	{
		scanf("%ld%ld%ld", &origem, &esquerdo, &direito);
		a[origem][0] = esquerdo;
		a[origem][1] = direito;
	}
	printf("%ld\n", altura(raiz));

	// só pra aprender
	for (i = 0; i < n; ++i)
	{
		free(a[i]);
	}
	free(a);

	return 0;
}