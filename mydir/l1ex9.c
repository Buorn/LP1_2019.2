#include <stdio.h>
#define DIM 20

int main(void)
{
    int cont, i, j, aux;
    char nome[DIM]={'\0'};

    //Leitura da cadeia.

    printf("Digite uma cadeia: ");
    scanf("%s", nome);

    //Contagem das letras repetidas.

    for(i=0;i<DIM;i++){
        cont=1;
        for(j=i+1;j<DIM;j++){
            if(nome[i] == nome[j]){
                cont++;
            }
        }
        //Verificação se a letra já foi contada.

        aux=0;
        for(j=i;j>=0;j--){
          if(nome[i] != nome[j]){
            aux++;
          }
        }
        if((aux == i) && (nome[i] != '\0')){
            printf("Essa cadeia tem %d letras %c \n",cont, nome[i]);
        }
    }

return 0;
}
