/*
3) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três notas e 
seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
*/

#include <stdio.h>
#include <locale.h>
int main() {

	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, p1, p2, p3, m;
	printf("Insira a primeira nota:\n");
	scanf("%f", &n1);
	printf("Insira o peso da primeira nota:\n");
	scanf("%f", &p1);
	printf("Insira a segunda nota:\n");
	scanf("%f", &n2);
	printf("Insira o peso da segunda nota:\n");	
	scanf("%f", &p2);
	printf("Insira a terceira nota:\n");
	scanf("%f", &n3);
	printf("Insira o peso da terceira nota\n");
	scanf("%f", &p3);
	m = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);
	printf("Média ponderada: %.0f\n", m);
}
