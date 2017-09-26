#include <stdio.h>


int main()
{
	int n, m;
	int l, c;
	scanf("%d%d", &n, &m);

	int a[n][m], b[n][m], resp[n][m];

	// lê a matriz a
	for (l = 0; l < n; ++l)
	{
		for (c=0; c < m; ++c)
		{
			scanf("%d", &a[l][c]);
		}
	}

	// lê a matriz b
	for (l = 0; l < n; ++l)
	{
		for (c=0; c < m; ++c)
		{
			scanf("%d", &b[l][c]);
		}		
	}

	for (l = 0; l < n; ++l)
	{
		for (c=0; c < m; ++c)
		{
			resp[l][c] = a[l][c] + b[l][c];
		}		
	}


	// imprimir o resultado
	for (l = 0; l < n; ++l)
	{
		for (c=0; c < m; ++c)
		{
			printf("%d", resp[l][c]);
			if (c < (m-1))
			{
				printf(" ");
			}


		}
		printf("\n");
	}





	return 0;
}