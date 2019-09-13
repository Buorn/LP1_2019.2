#include <stdio.h>

int main(void){

  int i, contador = 0, n;

  printf("digite um valor:");
  scanf("%d", &n);

  for (i=1; i<=n; i++){
    if (n%i == 0){
      contador++;
    }
  }
  if (contador == 2){
    printf("O número %d é primo\n", n);
  }else{
    printf("O número %d não é primo\n", n);
  }
  return 0;
}

