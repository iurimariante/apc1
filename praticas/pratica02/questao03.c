// 3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).

#include <stdio.h>
#include <math.h>

int main() {

  float celsius;
  printf("Insira o valor em °C: ");
  int deu_certo = scanf("%f", &celsius);
  float farenheit = 1.8 * celsius + 32;
  
  printf("O valor em °F é %f\n", farenheit);

  return 0;
}