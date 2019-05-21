/* Leia  uma  string  do  tecladoe  leia  também um  caractere  qualquer.Substitua todas  as  vogais  da  palavra  dada  por  esse  caractere.  Ao  final,  imprima  a  nova string */
#include <stdio.h>
#include <string.h>

int main() {
	char palavra[20], simbolo;
	
	printf("Digite a string: ");
	fgets(palavra, 20, stdin);
	
	printf("Digite o simbolo: ");
	scanf("%c", &simbolo);
	
	for (int i = 0; i < strlen(palavra); i++) {
		if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
			palavra[i] = simbolo;
		}
	}
	
	printf("%s", palavra);
	
	return 0;
}
