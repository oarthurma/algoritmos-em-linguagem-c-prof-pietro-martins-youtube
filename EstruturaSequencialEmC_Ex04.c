/*
4) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba o sal�rio de 
um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se que este sofreu um 
aumento de 25%.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// Declara��o de vari�veis
	float sal, nsal, aumento;
	
	// Entrada de dados
	printf("Insira o sal�rio:\n");
	scanf("%f", &sal);
	
	// Processamento
	nsal = sal + (sal * 25 / 100);
	
	// Sa�da de dados
	printf("Novo sal�rio: %.0f", nsal);
	
}
