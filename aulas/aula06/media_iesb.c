#include <stdio.h>

int main() {

  float nota1;
  float nota2;

  printf("Insira a primeira nota: ");
  int deu_certo = scanf("%f", &nota1);

  int nota1_valida = nota1 >= 0.0f && nota1 <= 10.0f;

  if (nota1_valida) {
    printf("Insira a segunda nota: ");
    deu_certo = scanf("%f", &nota2);

    int nota2_valida = nota2 >= 0.0f && nota2 <= 10.0f;

    if (nota2_valida) {
      float media = 0.4 * nota1 + 0.6 * nota2;
      printf(" A sua média IESB é %.1f\n", media);
    } 
    else {
      printf("Nota invalida! Informe um valor entre 0 e 10.\n");
    }
  } 
  else {
    printf("Nota invalida! Informe um valor entre 0 e 10.\n");
  }

  return 0;
}