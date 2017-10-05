#include <stdio.h>

#define li long int

int rodadas;
int faltam;

li contar(int rodada_atual, li soma)
{
	int i;

	if ( (soma + (rodadas - rodada_atual) * 6) < faltam )
	{		
		return 0;
	}

	
	if (rodada_atual == rodadas)
	{
		if (soma >= faltam)
		{
			return 1;
		}
		else
		{
			return 0;	
		}
		
	}

	// dado
	li resposta = 0;
	for (i = 6; i >= 1; --i)
	{
		resposta += contar(rodada_atual+1, soma + i);
	}

	return resposta;

}


int main()
{
	scanf("%d%d", &rodadas, &faltam);
	printf("%ld\n", contar(0,0));
	return 0;
}