#include <stdio.h>

int main() {

  int numeros[10]; // dentro do colchete vai a quantidade de numeros
  numeros[0] = 1; //aqui, dentro dos colchetes vai a posição do numero, lembrando que a posição sempre começa do 0.
  numeros[8] = 5;
  
  int soma = 0;
  
  for(int i=0; i<10; i++) {
    printf("Entre com o %io numero: ", i+1);
    int deu_certo = scanf("%i", &numeros[i]);
    soma = soma + numeros[i];
  }

  float media = soma/10.0f;
  printf("A média de ");
  
  for(int i=0; i<10; i++) {
    printf("%i + ", numeros[i]);
  }
  
  printf("/10 = %.1f\n", media);

  return 0;
}