//1. Faça um programa em C que leia três números reais e imprima a média aritmética destes números.

#include <stdio.h>

int main() {
  
  float primeiro_numero;
  float segundo_numero;
  float terceiro_numero;
  float media;

  printf("Primeiro número: ");
  int deu_certo = scanf("%f", &primeiro_numero);
  printf("Segundo número: ");
  deu_certo = scanf("%f", &segundo_numero);
  printf("Terceiro número: ");
  deu_certo = scanf("%f", &terceiro_numero);

  media = (primeiro_numero + segundo_numero + terceiro_numero)/3;

  printf("A média aritimética dos tres números é: %f\n", media);

  return 0;
}