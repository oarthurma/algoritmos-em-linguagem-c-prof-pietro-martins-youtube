/*
3) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba tr�s notas e 
seus respectivos pesos, calcule e mostre a m�dia ponderada dessas notas.
*/

#include <stdio.h>
#include <locale.h>
int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	// Declara��o de vari�vies
	float n1, n2, n3, peso_n1, peso_n2, peso_n3, media;
	
	// Entrada de dados
	printf("Insira a primeira nota:\n");
	scanf("%f", &n1);
	printf("Insira o peso da primeria nota:\n");
	scanf("%f", &peso_n1);
	
	printf("Insira a segunda nota:\n");
	scanf("%f", &n2);
	printf("Insira o peso da segunda nota:\n");
	scanf("%f", &peso_n2);
	
	printf("Insira a terceira nota:\n");
	scanf("%f", &n3);
	printf("Insira o peso da terceira nota:\n");
	scanf("%f", &peso_n3);
	
	// C�lculo
	media = ((n1 * peso_n1) /10 )+ ((n2 * peso_n2) /10) + ((n3 * peso_n3) / 10);
	
	// Sa�da de dados	
	printf("M�dia ponderada: %.0f", media);
	
}
