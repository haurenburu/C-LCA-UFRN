#include <stdio.h>
#include <string.h>

int main() {
  char palavra[100];
  int chave = 3;
  
  puts("Digite a palavra para ser criptografada: ");
  fgets(palavra, 100, stdin);
  
  for(int i = 0; i < strlen(palavra); i++) {
    palavra[i] += chave;
  }
  puts(palavra);
             
  return 0;
}
