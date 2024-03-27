// 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <stdio.h>
#include <math.h>

int main() {

  float a;
  float b;
  float c;
  
  printf("Insira o valor de a: ");
  int deu_certo = scanf("%f", &a);
  printf("Insira o valor de b: ");
  deu_certo = scanf("%f", &b);
  printf("Insira o valor de c: ");
  deu_certo = scanf("%f", &c);

  float delta = (b*b)-(4*a*c);

  double raiz1 = ((-b) + sqrt(delta)) / (2 * a);
  double raiz2 = ((-b) - sqrt(delta)) / (2 * a);

  printf("Raiz 1: %f\n", raiz1);
  printf("Raiz 2: %f\n", raiz2);
  
  return 0;
}