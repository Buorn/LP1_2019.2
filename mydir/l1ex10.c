#include <stdio.h>

int main()
{
    int i,nword, conf=0, j=0, n=0, col=0, lin=0, npalavra=0, cont=0;
    char s[]="casa casa castelo", mat[3][10]={'\0'};
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
    for(i=0;i<3;i++){
        printf("%s \n", mat[i]);
    }
    //compara as palavras de uma matriz
    lin=0;
    for(i=lin+1;i<npalavra;i++){
        nword=1;
        for(j=0;j<10;j++){
            if(mat[lin][j] !='\0'){
                conf++;
            }
            if(mat[lin][j] == mat[i][j] && mat[lin][j] !='\0' && mat[i][j] != '\0'){
                cont++;
            }
        }
        if(conf==cont){
            mat[i][0]='\0';
            nword++;
        }
        lin++;
    }

        printf("A mesma palavra aparece %i vezes nessa frase \n", nword);

    return 0;
}
