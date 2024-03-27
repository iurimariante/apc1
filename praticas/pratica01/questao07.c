//  Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>

int main() {
  
  float distancia;
  float angulo;
  float altura;

  printf("Qual a distância do avião? ");
  int deu_certo = scanf("%f", &distancia);
  printf("Angulo de inclinação menor ou igual a 45°: ");
  deu_certo = scanf("%f", &angulo);

  altura = (sin(angulo) * distancia) * -1;

  printf("A altura do avião é %f\n", altura);
  
  return 0;
}