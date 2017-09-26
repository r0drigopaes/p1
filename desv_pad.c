#include <stdio.h>
#include <math.h>
#define MAX 100

double variancia(double a[], int tam, double media)
{
	int i;
	double resultado = 0;
	for (i=0; i< tam; ++i)
	{
		resultado += (a[i]-media) * (a[i]-media);
	}
	return resultado / tam;
}

double desv_pad(double a[], int tam, double media)
{
	return sqrt(variancia(a, tam, media));
}

int main()
{
	int n, i;
	double numeros[MAX];
	double resultado, media;

	scanf("%d", &n);
	for (i=0, media=0; i<n; i++)
	{
		scanf("%lf", &numeros[i]);
		media += numeros[i];
	}
	media = media / n;

	resultado = desv_pad(numeros, n, media);
	
	printf("O desvio padrao eh de: %lf\n", resultado);

	return 0;
}