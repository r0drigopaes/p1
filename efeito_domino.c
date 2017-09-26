#include <stdio.h>
#include <string.h>

#define MAX 10000

int derruba[MAX];
int vst[MAX]; //visitados
int resp[MAX];

int max(int a, int b)
{
	return (a>b) ? a : b;
}

// visitar o dominó i
int visitar(int i)
{	
	if (resp[i-1] != -1)
	{
		return resp[i-1];
	}
	if (vst[i-1]) return -1;

	vst[i-1] = 1;

	resp[i-1] = max(i, visitar(derruba[i-1]));

	return resp[i-1];
}

int main()
{
	int n, i;

	scanf("%d", &n);

	// ler quem derruba quem
	for ( i = 0; i < n; ++i)
	{
		scanf("%d", &derruba[i]);
	}

	memset( resp, -1, sizeof(resp));

	for ( i = 1; i <= n; ++i)
	{
		memset( vst, 0, sizeof(vst));		
		printf("%d\n", visitar(i) );
	}
	return 0;
}