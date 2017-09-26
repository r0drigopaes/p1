#include <stdio.h>
#define N 3
#define M 2
#define K 3

void print_matrix(int m[N][K])
{
	int i, j;
	for (i = 0 ; i < N; ++i)
	{
		for (j = 0; j < K; ++j)
		{
			if (j == K-1)
			{
				printf("%d\n",m[i][j]);	
			}
			else
			{
				printf("%d ",m[i][j]);
			}
			
		}		
	}
}

int main()
{
	int a[N][M] = {
		{1, 2},
		{3, 4},
		{5, 6}
	};
	int b[M][K] = {
		{7, 8, 9},
		{10, 11, 12}
	};

	int c[N][K] = {0};

	int i, j, k;

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < K; ++j)
		{
			for (k = 0; k < M; ++k)
			{
				c[i][j] += a[i][k]*b[k][j];
			}			
		}
	}

	print_matrix(c);


	return 0;

}