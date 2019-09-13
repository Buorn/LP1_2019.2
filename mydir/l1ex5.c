#include <stdio.h> 
int main(void){
    
    int c, l, xxv, x, v, i, n;
    
    printf("Diite um valor:");
    scanf("%d", &n);
    
    if(n>=100){
        c=n/100;
        l=(n%100)/50;
        xxv=((n%100)%50)/25;
        x=(((n%100)%50)%25)/10;
        v=((((n%100)%50)%25)%10)/5;
        i=((((n%100)%50)%25)%10)%5;
    }
    if(n>=50 && n<100){
        c=0;
        l=n/50;
        xxv=(n%50)/25;
        x=((n%50)%25)/10;
        v=(((n%50)%25)%10)/5;
        i=(((n%50)%25)%10)%5;
    }
    if(n>=25 && n<50){
        c=0;
        l=0;
        xxv=n/25;
        x=(n%25)/10;
        v=((n%25)%10)/5;
        i=((n%25)%10)%5;
    }
    if(n>=10 && n<25){
        c=0;
        l=0;
        xxv=0;
        x=n/10;
        v=(n%10)/5;
        i=(n%10)%5;
    }
    if(n>=5 && n<10){
        c=0;
        l=0;
        xxv=0;
        x=0;
        v=n/5;
        i=n%5;
    }
    if(n<5){
        i=n;
    }
    
    printf("%d notas de 1 real, %d moedas de 50 centavos, %d moedas de 25 centavos, %d moedas de 10 centavos, %d moedas de 5 centavos e. %d moedas de 1 centavo\n", c, l, xxv, x, v, i);    
    return 0;
    }
