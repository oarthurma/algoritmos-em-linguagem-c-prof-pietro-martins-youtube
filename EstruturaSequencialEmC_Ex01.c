#include <stdio.h>
#include <locale.h>

/* 
1) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba quatro 
n�meros inteiros, calcule e mostre a soma desses n�meros.
*/	

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4;
	printf("Informe quatro n�meros, em sequ�ncia:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	int result = n1 + n2 + n3 + n4;
	printf("Resultado da soma: %d", result);
}
