#include <stdio.h>

int main(void){

    int aux, i, j, vetor[20]={10, 45, 15, 65, 3, 1, 11, 12, 35, 87, 100, 9, 4, 2, 21, 38, 32, 7, 19, 20};
    
    
    for(i=0; i<20; i++){
        for(j=i+1;j<20;j++){
            if(vetor[i]<vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }       
    }
    
    for(i=0; i<2; i++){
        printf("%d \n", vetor[i]);
    }
    

return 0;
}
