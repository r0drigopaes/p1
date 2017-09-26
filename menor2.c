#include<stdio.h>

int maior2(int a, int b)
{
	return a > b ? a : b;
}

int maior3(int x, int y, int z)
{
	return maior2(maior2(x,y),z);
}

int main()
{
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	printf("maior: %d\n", maior3(x, y, z));
	
	return 0;
}