/*
4) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba o sal�rio de 
um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se que este sofreu um 
aumento de 25%.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float sal, novo_sal;
	printf("Insira o sal�rio:\n");
	scanf("%f", &sal);
	novo_sal = sal + sal*(25.0/100.0);
	printf("Novo sal�rio: %.2f.\n", novo_sal);
}
