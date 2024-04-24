// 5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>
#include <math.h> 
int main() {

  float peso;
  float altura;
  float imc;

  printf("Insira o peso: ");
  int deu_certo = scanf("%f", &peso);
  printf("Insira a altura em metros: ");
  deu_certo = scanf("%f", &altura);

  imc = (peso/(altura*altura));

  printf("O IMC é igual a %f\n", imc);
  
  return 0;
}