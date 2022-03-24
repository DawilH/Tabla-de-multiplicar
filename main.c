#include <stdio.h>

int main(void) {
  int num;
  int i;
  int multiplicacion;

  printf("\nIngrese el numero; ");
  scanf("%d" , &num);
  printf("La tabla de : %d" , num);
  for(i=1; i <= 10 ; i++)
    {
      printf("\n%d por %d igual a %d" , num, i, i * num);
     }
return 0;
}