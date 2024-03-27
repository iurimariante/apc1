// 3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>

int main() {

  const float PI = 3.1416;
  int raio;

  printf("Insira o valor do raio da pizza: ");
  int deu_certo = scanf("%i", &raio);
  float perimetro_da_pizza = 2*PI*raio;
  printf("O perimetro da pizza é de %.2fcm\n", perimetro_da_pizza);
  
  return 0;
}