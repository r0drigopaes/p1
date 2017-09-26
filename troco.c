#include <stdio.h>

#define CAFE 7

int main()
{
	int dinheiro;
	scanf("%d",  &dinheiro);
	printf("%d\n", dinheiro % CAFE);
	return 0;
}