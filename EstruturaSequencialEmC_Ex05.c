/*
5) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba o sal�rio de 
um funcion�rio e o percentual de aumento, calcule e mostre o valor do aumento e o 
novo sal�rio.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// Declara��o de vari�veis
	float sal, nsal, aumento;
	int perc_aumento;
	
	// Entrada de dados
	printf("Insira o sal�rio:\n");
	scanf("%f", &sal);
	
	printf("Insira o percentual de aumento:\n");
	scanf("%i", &perc_aumento);
	
	// Processamento
	aumento = sal * perc_aumento / 100;
	nsal = sal + aumento;
	
	// Sa�da de dados
	printf("Valor do aumento: %.0f", aumento);
	printf("\nNovo sal�rio: %.0f", nsal);	
}
