#include<stdio.h>
#include<math.h>

int main()
{
	int x, d, achei, raiz;
	scanf("%d", &x);

	d = 2;
	achei = 0;
	raiz = sqrt(x);

	while (!achei && d<=raiz)
	{
		// procurar um divisor
		if (x % d == 0)
		{
			achei = 1; // eita, não é primo
		}
		d++;
	}
	if (achei)
	{
		printf("Não é primo\n");
	}
	else
	{
		printf("É primo\n");
	}

	return 0;
}