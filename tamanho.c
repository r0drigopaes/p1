#include <stdio.h>
#include <string.h>

#define MAX 501

const char VOGAIS[6] = "AEIOU";

char para_maiuscula(char c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return c - ('a' - 'A');
	}
	return c;
}

/*
	('a', ["abcde"], 5)
*/
int esta_contido(char c, const char conjunto[], int tam)
{
	int i;
	for ( i = 0; i < tam; ++i)
	{
		if (c == conjunto[i]) return 1;
	}
	return 0;
}

int vogais(char frase[])
{
	int contador = 0;
	int i = 0;
	while (frase[i]!= '\0')
	{
		if (esta_contido(para_maiuscula(frase[i]), VOGAIS, 5) )
		{
			++contador;
		}
		i++;
	}
	return contador;
}

void inverter(char original[], int tam, char resposta[])
{
	int i;
	for (i = 0; i < tam; ++i)
	{
		resposta[ tam - 1 -i ] = original[ i ];
	}
	resposta[tam] = '\0';

}

void str_to_mai(char str[], int tam)
{
	int i;
	for (i = 0; i < tam; ++i)
	{
		str[i] = para_maiuscula(str[i]);
	}
}


int palin(char str[], int tam)
{
	int total = tam / 2;
	int i = 0;
	while (i < total && str[i] == str[tam-1-i])
	{
		++i;
	}
	return (i==total)? 1 : 0;
}

int main()
{
	char minha_string[MAX], invertida[MAX];
	int tamanho;
	gets(minha_string);
	tamanho = strlen(minha_string);
	// printf("%d\n", vogais(minha_string) );

	str_to_mai(minha_string, tamanho);
	
	// inverter(minha_string, tamanho,invertida );

	if (palin( minha_string, tamanho))
	{
		printf("Palindromo\n");
	}
	else
	{
		printf("Nao eh!!\n");
	}
	
}