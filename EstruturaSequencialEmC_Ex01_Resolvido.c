/* 
1) (Adaptado de ASCENCIO e CAMPOS, 2008) Fa�a um programa que receba quatro 
n�meros inteiros, calcule e mostre a soma desses n�meros.
*/	

#include <stdio.h>
int main(){
	int n1, n2, n3, n4, s;
	printf("Informe quatro n�meros, em sequ�ncia:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	s = n1 + n2 + n3 + n4;
	printf("Resultad da soma: %d", s);
}
