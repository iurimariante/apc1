// 2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

#include <stdio.h>
#include <math.h>
int main() {

  int numero1;
  int numero2;
  int quociente;
  int resto;

  printf("Insira o primeiro número (dividendo): ");
  int deu_certo = scanf("%i", &numero1);
  printf("Insira o segundo número (divisor): ");
  deu_certo = scanf("%i", &numero2);

  quociente = numero1 / numero2;
  resto = numero1 % numero2;
  printf("O quociente da divisão é %i. O resto da divisão é %i.\n", quociente, resto);
  
return 0;
}
