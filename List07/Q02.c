/* Fa�a um programa que leia uma stringe a imprima de tr�s para frente */
#include <stdio.h>
#include <string.h>

int main() {
	char palavra[20];
	
	printf("Digite a string: ");
	fgets(palavra, 20, stdin);
	
	for (int i = strlen(palavra); i >= 0; i--) {
		printf("%c", palavra[i]);
	}
	
	return 0;
}
