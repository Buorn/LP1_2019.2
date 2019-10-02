#include <stdio.h>

int main(void){

    int i, j=0, k, n=0, col=0, lin=0, npalavra=1, cont;
    char s[]={"amarelo azul vermelho rosa amanha"}, mat[5][10]={'\0'};
   
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
    //
    for(i=0;i<10;i++){
        if(s[i] == ' '){
            col =0;
            lin++;
            i++;
        printf("%s \n", mat[i]);
    }


return 0;
}
