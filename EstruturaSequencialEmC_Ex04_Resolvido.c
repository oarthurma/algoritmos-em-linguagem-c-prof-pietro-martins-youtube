/*
4) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba o salário de 
um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um 
aumento de 25%.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float sal, novo_sal;
	printf("Insira o salário:\n");
	scanf("%f", &sal);
	novo_sal = sal + sal*(25.0/100.0);
	printf("Novo salário: %.2f.\n", novo_sal);
}
