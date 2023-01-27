/*
2) (Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que receba três notas, 
calcule e mostre a média aritmética entre elas.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	// Declaração de variáveis
	float nota1, nota2, nota3, media;
	
	// Entrada de dados
	printf("Informe três notas, sem sequência:\n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);
	
	// Cálculo
	media = (nota1 + nota2 + nota3) / 3;
	
	// Saída de dados
	printf("Média aritmética: %.0f", media);
	
}
