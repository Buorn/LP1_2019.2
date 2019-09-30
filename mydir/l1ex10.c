#include <stdio.h>

int main()
{
    int i, j=0, k, n=0, col=0, lin=0, npalavra=0, cont;
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
    for(i=0;i<2;i++){
        for(k=i+1;k<3;k++){
            for(j=0;j<10;j++){
                while(mat[i][j] == mat[k][j] && mat[i][j] != '\0' && mat[k][j] != '\0'){
                    cont=0;
                    if(mat[i][j] == '\0' && mat[k][j] == '\0'){
                        cont++;
                    }
                }
            }
        }
        printf("Nesta frase contem %d %s \n", cont, mat[i]);
    }
    return 0;
}
