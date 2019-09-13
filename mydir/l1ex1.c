#include <stdio.h>

int main (void){

  int n = 0;
  int contador = 0;

  while (n == 0){
    contador++;
    
    if (contador%3 == 2 &&  contador%5 == 3 && contador%7 == 4){
      n = contador;
    }
  }

  printf("O menor numero eh %d\n", n);
  return 0;
}
