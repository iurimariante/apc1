// 9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>
#include <math.h>
int main() {

  int anos;
  int meses;
  int dias;
  int dias2;

  printf("Anos: ");
  int deu_certo = scanf("%i", &anos);
  printf("Meses: ");
  deu_certo = scanf("%i", &meses);
  printf("Dias: ");
  deu_certo = scanf("%i", &dias);

  dias2 = (anos*365) + (meses*30) + dias;

  printf("A idade em dias é de %i dias.\n", dias2);
  
  return 0;
}