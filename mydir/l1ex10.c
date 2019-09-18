#include <stdio.h>

int main(void){

    char cadeia[]="bruno bandeira brandao";
    int npalavra=1, n=0;

    //calcula o numero de palavas e tamanho da frase
    while(cadeia[n] != '\0'){     
      if(cadeia[n] == ' '){
        npalavra++;
      }
      n++;      
    }
		
		for(i=0;
     
    printf("%d \n",npalavra);
    printf("%d \n",n);
return 0;
}
