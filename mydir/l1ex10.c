#include <stdio.h>

int main()
{
    int i, j=0, n=0, col=0, lin=0, npalavra=0;
    char s[]="bruno bandeira brandao", mat[3][10]={'\0'};
    //calcula tamanho da cadeia e o numero de palavras
    while(s[n] != '\0'){
        if(s[n] == ' '){
            npalavra++;
        }
        n++;
    }
    
    //separa as palavras e joga para uma matriz
    for(i=0; i<=n; i++){
        if(s[i] == ' '){
            col =0;
            lin++;
            i++;
        }
        mat[lin][col] = s[i];
        col++;
    }
    //imprime uma matriz de string
    for(i=0;i<=3;i++){
        printf("%s", mat[i]);
    }


    return 0;
}
