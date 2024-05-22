#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;
  do {
    int deu_certo = system("clear");
    printf("Menu jogo\n");
    printf("1. Iniciar\n");
    printf("2. Resultado\n");
    printf("3. Ajuda \n");
    printf("4. Sair \n");
    printf("Escolha uma opção -->  ");
    deu_certo = scanf("%i", &opcao);
    if (!deu_certo) {
      opcao = 0;
    }
    while (getchar() != '\n'); //limpar buffer do teclado

    switch (opcao) {

      case 1: {
        deu_certo = system("clear");
        char nome[31];
        printf("Nome do Jogador: ");
        deu_certo = scanf("%[^\n]s", nome);
        while (getchar() != '\n');
        printf("Olá %s\n", nome);
        printf("Pressione ENTER para iniciar");
        getchar();
        break;
      }
      case 2:{
        deu_certo = system("clear");
        printf("Resultado\n");
        printf("1o lugar - Iuri     - 1000\n");
        printf("2o lugar - Joao     - 0999\n");
        printf("3o lugar - Dani     - 0998\n");
        printf("4o lugar - Emanuel  - 0997\n");
        printf("5o lugar - Milhouse - 0996\n");
        printf("Pressione ENTER para continuar");
        getchar();
        break;
      }
      case 3:    break;
      case 4:    break;
      default:
      opcao = 0;
      printf(" Opção invalida! Pressione ENTER para continuar");
      getchar();
    }
  } while (opcao != 4);
  
  return 0;
}