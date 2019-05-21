/* Faça  um  programa  que  leia  uma  string  e  imprima  as  quatro  primeiras  letras dela */
#include <stdio.h>

int main() {
	char palavra[20];
	
	printf("Digite uma string: ");
	fgets(palavra, 20, stdin);
	
	for (int i = 0; i < 4; i++) {
		printf("%c", palavra[i]);
	}
	
	return 0;
}
