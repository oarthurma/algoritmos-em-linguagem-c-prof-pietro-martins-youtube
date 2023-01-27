/*
2) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três notas, 
calcule e mostre a média aritmética entre elas.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, m;
	printf("Informe três notas, em sequência:\n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	m = (n1+n2+n3)/3;
	printf("Média aritmética: %.0f\n", m);
}
