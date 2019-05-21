/* Faça um programa que leia uma stringe a imprima de trás para frente */
#include <stdio.h>

int main() {
	char palavra[20];
	
	printf("Digite a string: ");
	fgets(palavra, 20, stdin);
	
	for (int i = 20; i >= 0; i--) {
		printf("%c", palavra[i]);
	}
	
	return 0;
}
