/*
  4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h>

int main(){

  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  float preco_inicial = 273.0f;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  float valor_imposto_icms = ICMS * preco_inicial;
  float valor_imposto_COFINS = COFINS * preco_inicial;
  float valor_imposto_PIS_PASEP = PIS_PASEP * preco_inicial;
  float valor_imposto_total = preco_final - preco_inicial;
  
  printf ("O preço final do produto é R$ %f\n", preco_final);
  printf ("O preço inicial do produto era %f\n", preco_inicial);
  printf ("Valor ICMS: %f\n", valor_imposto_icms);
  printf ("Valor COFINS: %f\n", valor_imposto_COFINS);
  printf ("Valor PIS/PASEP: %f\n", valor_imposto_PIS_PASEP);
  printf ("O valor total dos impostos é %f\n", valor_imposto_total);
  
  return 0;
}