#include <stdio.h>
#include <string.h>
int main(void){

    int c, d, u, n;
    char centena[13]= {'\0'} , dezena[10]= {'\0'} , unidade[10]={'\0'};

    printf("Diite um valor:");
    scanf("%d", &n);

    if(n>=100){
        c=n/100;
        d=(n%100)/10;
        u=(n%100)%10;
    }
    if(n<100 && n>=10){
        c=0;
        d=n/10;
        u=n%10;
    }
    if(n<10){
        c=0;
        d=0;
        u=n;
    }

    switch(c){
        case 0:
            strcpy(centena,"");
            break;
        case 1:
            strcpy(centena,"cento");
            break;
        case 2:
            strcpy(centena,"duzentos");
            break;
        case 3:
            strcpy(centena,"trezentos");
            break;
        case 4:
            strcpy(centena,"quatrocentos");
            break;
        case 5:
            strcpy(centena,"quinhentos");
            break;
        case 6:
            strcpy(centena,"seiscentos");
            break;
        case 7:
            strcpy(centena,"setecentos");
            break;
        case 8:
            strcpy(centena,"oitocentos");
            break;
        case 9:
            strcpy(centena,"novecentos");
            break;
    }
    switch(d){
        case 0:
            strcpy(dezena,"");
            break;
        case 2:
            strcpy(dezena,"vinte");
            break;
        case 3:
            strcpy(dezena,"trinta");
            break;
        case 4:
            strcpy(dezena,"quarenta");
            break;
        case 5:
            strcpy(dezena,"cinquenta");
            break;
        case 6:
            strcpy(dezena,"sessenta");
            break;
        case 7:
            strcpy(dezena,"setenta");
            break;
        case 8:
            strcpy(dezena,"oitenta");
            break;
        case 9:
            strcpy(dezena,"noventa");
            break;
    }

    if(d==1){
        switch(u){
            case 0:
                strcpy(unidade,"dez");
                break;
            case 1:
                strcpy(unidade,"onze");
                break;
            case 2:
                strcpy(unidade,"doze");
                break;
            case 3:
                strcpy(unidade,"treze");
                break;
            case 4:
                strcpy(unidade,"catorze");
                break;
            case 5:
                strcpy(unidade,"quinze");
                break;
            case 6:
                strcpy(unidade,"dezeseis");
                break;
            case 7:
                strcpy(unidade,"dezesete");
                break;
            case 8:
                strcpy(unidade,"dezoito");
                break;
            case 9:
                strcpy(unidade,"dezenove");
                break;
        }
    }
    else{
        switch(u){
            case 0:
                strcpy(unidade,"");
                break;
            case 1:
                strcpy(unidade,"um");
                break;
            case 2:
                strcpy(unidade,"dois");
                break;
            case 3:
                strcpy(unidade,"tres");
                break;
            case 4:
                strcpy(unidade,"quatro");
                break;
            case 5:
                strcpy(unidade,"cinco");
                break;
            case 6:
                strcpy(unidade,"seis");
                break;
            case 7:
                strcpy(unidade,"sete");
                break;
            case 8:
                strcpy(unidade,"oito");
                break;
            case 9:
                strcpy(unidade,"nove");
                break;
        }
    }
    if(n>100 && d!=1 && d!=0 && u!=0){
        printf("%s e %s e %s \n", centena, dezena, unidade);
    }
    if(n>100 && d==0){
        printf("%s e %s \n", centena, unidade);
    }
    if(n>100 && d==1){
        printf("%s e %s \n", centena, unidade);
    }
    if(n>100 && u==0){
        printf("%s e %s \n", centena, dezena);
    }
    if(n<100 && n >19){
        printf("%s e %s \n", dezena, unidade);
    }
    if(n<20 && n>10 && d==1){
        printf("%s \n", unidade);
    }
    if(n<=10){
        printf("%s \n", unidade);
    }
    return 0;
    }
