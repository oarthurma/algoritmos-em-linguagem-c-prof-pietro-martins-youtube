/*
5) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário de 
um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o 
novo salário.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// Declaração de variáveis
	float sal, nsal, aumento;
	int perc_aumento;
	
	// Entrada de dados
	printf("Insira o salário:\n");
	scanf("%f", &sal);
	
	printf("Insira o percentual de aumento:\n");
	scanf("%i", &perc_aumento);
	
	// Processamento
	aumento = sal * perc_aumento / 100;
	nsal = sal + aumento;
	
	// Saída de dados
	printf("Valor do aumento: %.0f", aumento);
	printf("\nNovo salário: %.0f", nsal);	
}
