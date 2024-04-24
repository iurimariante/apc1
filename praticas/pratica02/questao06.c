// 6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

#include <stdio.h>
#include <math.h>
int main() {

  float valor_compra;
  float ano_fabricacao;
  float ano_depreciacao;
  float valor_depreciacao;

  printf("Valor de compra: ");
  int deu_certo = scanf("%f", &valor_compra);
  printf("Ano de fabricação: ");
  deu_certo = scanf("%f", &ano_fabricacao);
  printf("Ano de depreciação: ");
  deu_certo = scanf("%f", &ano_depreciacao);

  valor_depreciacao = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;

  printf("O valor depreciado do veículo é de %.2f\n", valor_depreciacao);
  
  return 0;
}