// 10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

#include <stdio.h>
#include <math.h>
int main() {

  int numero;
  int unidades;
  int dezenas;
  int centenas;
  int milhares;

  printf("Insira um número inteiro: ");
  int deu_certo = scanf("%i", &numero);

  milhares = numero / 1000;
  centenas = (numero % 1000) / 100;
  dezenas = (numero % 100) / 10;
  unidades = numero % 10;

  printf("%i é decomposto em %i unidades, %i dezenas, %i centenas e %i milhares.\n", numero, unidades, dezenas, centenas, milhares);

  return 0;
}