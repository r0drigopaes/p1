#include <stdio.h>

int main()
{
	double v_via, v_carro, multa, excesso;
	int pontos;

	scanf("%lf%lf", &v_via, &v_carro);

	excesso = v_carro / v_via;
	

	if ( excesso <= 1)
	{
		multa = 0;
		pontos = 0;	
	}
	else if ( excesso <= 1.2)
	{
		multa = 85.13;
		pontos = 4;
	}
	else if ( excesso <= 1.5 )
	{
		multa = 127.69;
		pontos = 5;	
	}
	else
	{
		multa = 574.62;
		pontos = 7;
	}
	printf("%.2lf\n%d\n", multa, pontos);

	return 0;
}