// 5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#include <stdio.h>

int main() {
  
  float gigabytes;

  printf("Valor em GigaBytes: ");
  int deu_certo = scanf("%f", &gigabytes);

  float bytes = gigabytes*1024*1024*1024;
  
  printf("O valor em Bytes é: %f\n", bytes);
  
  
  return 0;
}