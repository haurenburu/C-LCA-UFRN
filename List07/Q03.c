/* Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a string invertida */
#include <stdio.h>
#include <string.h>

int main() {
	char palavra[20];
	
	printf("Digite a string: ");
	fgets(palavra, 20, stdin);
	
	strrev(palavra);
	
	printf("%s", palavra);
	
	return 0;
}
