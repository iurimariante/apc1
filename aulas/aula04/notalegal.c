#include <stdio.h>

int main() {
  
  char nome[31];
  int quantidade;
  float valor;
  
  printf("Insira o nome do produto:  ");
  int deu_certo = scanf("%[^\n]s", nome);
  printf("Insira a quantidade do produto:  ");
  deu_certo = scanf("%i", &quantidade);
  printf("Insira o valor do produto:  ");
  deu_certo = scanf("%f", &valor);

  printf("\x1b[32m------------------------\n");
  printf(" N O T A     L E G A L  \n");
  printf("------------------------\x1b[0m\n");
  printf("Item          Qtd  Valor\n");
  printf("%-13s %03i %6.2f\n" , nome, quantidade, valor);
  
  return 0;
}