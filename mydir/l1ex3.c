#include <stdio.h>

int main(void){

  int i, j, soma=0;

  for (i=1; i<=32767; i++){
    for (j=1; j<i; j++){
      if (i%j == 0){
        soma += j;
      }
      }
    if (soma == i){
      printf("%d é um numero perfeito\n",i);
    } 
    soma =0;
  }
  return 0;
}
