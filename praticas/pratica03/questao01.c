// 1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.

#include <stdio.h>

int main() {

  int numero;

  printf("Insira um número inteiro: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo) {

    int numero_par = numero % 2 == 0;

    if (numero_par) {
      printf("O número %i é par.\n", numero);
    }
    else {
      printf("O número %i é ímpar.\n", numero);
    }
  }
  else {
    printf("Número inválido! Tente novamente.\n");
  }

  return 0;
}