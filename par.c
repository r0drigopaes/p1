#include <stdio.h>

int main()
{
	int num, eh_par;
	scanf("%d", &num);
	// e agora? como saber se é par?
	eh_par = !(num % 2);

	if (eh_par == 1)
	{
		printf("UHUUUUU\n");
	}


	return 0;
}