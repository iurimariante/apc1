// 8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#include <stdio.h>
#include <math.h>
int main() {

  int segundos;
  int horas;
  int minutos;
  int segundos2;

  printf("Insira o tempo em segundos: ");
  int deu_certo = scanf("%i", &segundos);

  segundos2 = segundos % 60;
  minutos = segundos / 60;
  horas = minutos / 60;

  printf("%i segundos corresponde a %i horas %i minutos e %i segundos", segundos, horas, minutos, segundos2);
  
  return 0;
}