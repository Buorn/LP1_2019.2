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

		   
//código para passar vetor para matriz
#include <stdio.h>

int main()
{
    int i, j, n=0, col=0, lin=0;
    char s[]="bruno bandeira brandao", mat[3][10]={'\0'};
    
    while(s[n] != '\0'){
        n++;
    }
    
    for(i=0; i<=n; i++){
        if(s[i] == ' '){
            col =0;
            lin++;
            i++;
        }
        mat[lin][col] = s[i];
        col++;
    }

    for(i=0;i<=3;i++){
            printf("%c", mat[i]);
    }


    return 0;
}
		    
