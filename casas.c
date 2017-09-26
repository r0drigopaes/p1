#include <stdio.h>

#define C 'R'

/*
Entrada:
	hora: hora do dia
	minutos: minutos do dia
Função que retorna quantos minutos se passaram
desde o início do dia.
*/
int minutos(int hora, int minutos)
{
	int total;
	total = hora * 60 + minutos;
	return total;
}

void casa()
{
	printf("%c%c%c%c\n", C, C, C, C);
	printf("%c%c%c%c\n", C, C, C, C);
	printf("%c%c%c%c%c%c\n", C, C, C, C, C, C);
	printf("%c%c%c%c%c%c\n", C, C, C, C, C, C);
	printf("%c%c%c%c\n", C, C, C, C);
	printf("%c%c%c%c\n\n", C, C, C, C);	
}

int main()
{
	int h, m, i;
	scanf("%d%d", &h, &m);
	for (i=0; i <= h; i++)
	{
		printf("Se passaram %d minutos\n", minutos(i, m));		
	}
	return 0;
}