/*
2) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba tr�s notas, 
calcule e mostre a m�dia aritm�tica entre elas.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// Declara��o de vari�veis
	float nota1, nota2, nota3, media;
	
	// Entrada de dados
	printf("Informe tr�s notas, sem sequ�ncia:\n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);
	
	// C�lculo
	media = (nota1 + nota2 + nota3) / 3;
	
	// Sa�da de dados
	printf("M�dia aritm�tica: %.0f", media);
	
}
