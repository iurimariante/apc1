#include <stdio.h>

int main() {
  int numero;
  int numero_valido = 0;

  while (numero_valido == 0) {
    printf("Entre com um número de 1 a 10: ");
    int leu_certo = scanf("%i", &numero);
    numero_valido = numero >= 1 && numero <= 10;

    if (leu_certo && numero_valido) {
      printf("Segue o jogo!\n");
    } else {
      getchar(); // limpar \n
      printf("Número inválido. Tente de novo!\n");
    }
  }

  do {
    printf("Entre com um número de 1 a 10: ");
    int leu_certo = scanf("%i", &numero);
    numero_valido = numero >= 1 && numero <= 10;

    if (leu_certo && numero_valido) {
      printf("Segue o jogo!\n");
    } else {
      getchar(); // limpar \n
      printf("Número inválido. Tente de novo!\n");
    }
  } while (numero_valido == 0);

  return 0;
}