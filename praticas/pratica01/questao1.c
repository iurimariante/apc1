// 1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

#include <stdio.h>

int main() {
  float nota1;
  float nota2;
  float media;

  printf("Nota 1: ");
  int deu_certo = scanf("%f", &nota1);
  printf("Nota 2: ");
  deu_certo = scanf("%f", &nota2);
  media = 0.4 * nota1 + 0.6 * nota2;

  printf("A media final é %f\n", media);

  return 0;
}