/*
2) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba tr�s notas, 
calcule e mostre a m�dia aritm�tica entre elas.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, m;
	printf("Informe tr�s notas, em sequ�ncia:\n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	m = (n1+n2+n3)/3;
	printf("M�dia aritm�tica: %.0f\n", m);
}
