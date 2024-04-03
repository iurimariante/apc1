// 4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

#include <stdio.h>
#include <math.h>
int main() {

  float largura;
  float comprimento;
  float area;

  printf("Insira a largura do terreno em metros: ");
  int deu_certo = scanf("%f", &largura);
  printf("Insira o comprimento do terreno em metros: ");
  deu_certo = scanf("%f", &comprimento);

  area = (largura*comprimento)/10000;

  printf("A área do terrneo em hectares é de %.2f\n", area);
  
  return 0;
}