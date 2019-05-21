/* Escreva  um  programa  que  leia uma  quantidade  N  de  strings,  definida  pelo usuárioe as imprima em ordem alfabética */
#include <stdio.h>
#include <string.h>

int main() {
	int quantidade;
	printf("Quantas palavras voce deseja: ");
	scanf("%d", &quantidade);
	
	char palavras[quantidade*20][20], aux[20];

	printf("Digite palavra por palavra: ");
	for (int i = 0; i <= quantidade; i++) {
		fgets(palavras[i], 60, stdin);
	}
	for (int i = 0; i <= quantidade; i++) {
		for (int j = i + 1; j <= quantidade; j++) {
			if (strcmp(palavras[i], palavras[j]) > 0) {
				strcpy(aux, palavras[i]);
				strcpy(palavras[i], palavras[j]);
				strcpy(palavras[j], aux);
			}
		}
	}
	printf("Palavras ordenadas: ");
	
	for( int i = 0; i <= quantidade; i++) {
		printf("%s", palavras[i]);
	}
	
	return 0;
}


