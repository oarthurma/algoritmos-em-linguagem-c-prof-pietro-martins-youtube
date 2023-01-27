/*
4) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário de 
um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um 
aumento de 25%.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// Declaração de variáveis
	float sal, nsal, aumento;
	
	// Entrada de dados
	printf("Insira o salário:\n");
	scanf("%f", &sal);
	
	// Processamento
	nsal = sal + (sal * 25 / 100);
	
	// Saída de dados
	printf("Novo salário: %.0f", nsal);
	
}
