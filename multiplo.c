#include <stdio.h>

int main()
{
	int numero;
	char resposta;
	scanf("%d", &numero);
	if (numero % 5 == 0)
	{
		resposta = 'S';
	}
	else
	{
		resposta = 'N';
	}
	printf("%c\n", resposta);
	return 0;
}