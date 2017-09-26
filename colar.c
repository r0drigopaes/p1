#include <stdio.h>

#define MAX 350
#define SUB(x) x==0 ? n-1 : x-1
#define ADD(x) x==n-1 ? 0 : x+1
#define MAXI(x, y) x>y?x:y

char colar[MAX+1];
int n;

int contar_tras(int pos, int * fim)
{
	char cor = colar[pos];
	int contador = 0;

	while ( (cor == colar[pos] || colar[pos] == 'w' || cor == 'w') && contador < n )
	{
		if (cor == 'w' && colar[pos] != 'w')
		{
			cor = colar[pos];
		}
		contador ++;
		pos = SUB(pos);
	}
	*fim = ADD(pos);
	return contador;
}

int contar_frente(int pos, int fim)
{
	char cor = colar[pos];
	int contador = 0;

	while ( pos != fim && (cor == colar[pos] || colar[pos] == 'w' || cor == 'w'))
	{
		if (cor == 'w' && colar[pos] != 'w')
		{
			cor = colar[pos];
		}
		contador ++;
		pos = ADD(pos);
	}
	return contador;
}

int main()
{
	int i, f;
	int tras, frente, solucao;
	scanf("%d\n", &n);
	gets(colar);
	solucao = -1;
	for (i = 0; i < n; ++i)
	{
		tras = contar_tras(i, &f);
		frente = contar_frente(ADD(i), f);
		solucao = MAXI(solucao, tras+frente);
	}
	printf("%d\n", solucao);
	
	return 0;
}