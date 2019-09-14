#include <stdio.h>

int main(void){

    char cadeia[25], matriz[3][10];
    int i, j=0, k, cont, w;

    printf("Digite uma frase: ");
    scanf("%s", cadeia);

    for(i=0;i<25;i++){
        cont=0;
        while(cadeia[i] != " "){
            cont++;
        }
        j++;
        for(k=0;k<cont;k++){
            matriz[j][k] = cadeia[i];
        }
    }
    for(w=0;w<3;w++){
        printf("s% \n",matriz[w]);
    }


return 0;
}
