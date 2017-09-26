#include <stdio.h>
#include <stdlib.h>

#define L 3
#define C 10


int main()
{	
	int i, j;
	int **a;

	a = (int **)malloc( L * sizeof(int *) );

	for (i = 0 ; i < L; ++i)
	{
		a[i] = (int *) malloc (C * sizeof(int));
	}

	for (i = 0 ; i < L; ++i)
	{
		for (j = 0 ; j < C; ++j)	
		{
			a[i][j] = 1;
		}
	}	


	for (i = 0 ; i < L; ++i)
	{
		for (j = 0 ; j < C; ++j)	
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}	
	


	// for (i =0 ; i < n; ++i)
	// {
	// 	printf("%d\n", a[i]);
	// }

	return 0;

}