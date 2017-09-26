#include <stdio.h>
#include <string.h>

int n;

void encontrar_candidatos(int solution[], int d, int *candidatos, int *nc)
{
	int i;
	int foi_usado[n+1];

	memset(foi_usado, 0, sizeof(int)*(n+1));

	// já sei quem foi usado
	for (i = 0; i<d; i++)
	{
		foi_usado[solution[i]] = 1;
	}

	*nc = 0;
	for (i = 1; i<=n; i++)
	{
		if (foi_usado[i] == 0 )
		{
			/*
			Se entrar aqui é pq solution[i] não
			foi usado antes.
			*/
			candidatos[*nc] = i;
			(*nc)++;
		}
	}
}

void bt(int d, int solution[])
{
	int i;
	if (d == n)
	{
		// parar
		for (i = 0; i < n; ++i)
		{
			printf("%d", solution[i]);
		}
		printf("\n");
		return;
	}

	int nc; // número de candidatos
	int candidatos[n];

	encontrar_candidatos(solution, d, candidatos, &nc);

	for (i = 0; i < nc; ++i)
	{
		
		solution[d] = candidatos[i];		
		bt(d+1, solution);
	}
}

int main()
{
	
	scanf("%d", &n);
	int s[n];
	bt(0, s);
}