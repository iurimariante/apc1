#include <stdio.h>

int main() {
  printf("\x1b[32m-----------------------\n");
  printf(" N O T A    L E G A L  \n");
  printf("-----------------------\x1b[0m\n");
  printf("\x1b[43m     Item     Qtd Valor\x1b[0m\n");
  printf("\x1b[43m%-13s %03i %5.2f\x1b[0m\n" , "Banana Nanica", 2, 20.00);
  printf("\x1b[43m%-13s %03i %5.2f\x1b[0m\n" , "Uva Globo", 1, 15.00);
  printf("\x1b[43m%-13s %03i %5.2f\x1b[0m\n" , "Laranja Lima", 1, 18.00);
  
  //printf("Banana Nanica    2    20.00\n");
  //printf("Uva Globo        1    15.00\n");
  //printf("Laranja Lima     1    18.00\n");
  
  printf("\x1b[31m-----------------------\x1b[0m\n");
  printf("\x1b[31mTOTAL...........: %-10.2f\x1b[0m\n", 53.00);
  
  
  return 0;
}