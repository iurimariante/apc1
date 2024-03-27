#include <stdio.h>
#include <math.h>

int main() {

  int numero1;
  int numero2;
  const double PI = 3.1416;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numeros é %i\n",soma);

  int subtracao = numero1 - numero2;
  printf("A subtração dos numeros é %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multplicação dos numeros é %i\n", multiplicacao);

  float divisao = numero1 / (numero2 * 1.0f);
  printf("A divisão dos numeros é %f\n", divisao);

  int resto = numero1 % numero2;
  printf("O resto da divisao dos numeros é %i\n", resto);

  //numero1 = numero1 + 1;
  //incremento
  printf("O incremento do primeiro numero é %i\n", numero1++);
  printf("O incremento do primeiro numero é %i\n", ++numero1);

  //numero1 = numero1 - 2;
  //decremento
  printf("O decremento do primeiro numero é %i\n", numero1--);
  printf("O decremento do primeiro numero é %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é %f\n", raiz_quadrada);

  double potencia = pow(numero1, 4); //à quarta potencia
  printf("A quarta potencia do primeiro numero é %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O logaritmo do primeiro numero na base 2 é %f\n", logaritmo2);

  double seno = sin(numero1 * PI / 180); //angulo em radiano * pi / 180
  printf("O seno do primeiro numero é %f\n", seno);

  double cosseno = cos(numero1);
  printf("O cosseno do primeiro numero é %f\n", cosseno);

  return 0;
}