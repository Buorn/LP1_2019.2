#include <stdio.h>

int main(void){

    int i, j, v1[4], v2[4], v3[4], v[12], aux;

    for(i=0;i<4;i++){
        printf("Digite %d valores: ",i);
        scanf("%d", &v1[i]);
    }
    for(i=0;i<4;i++){
        printf("Digite %d valores: ",i);
        scanf("%d", &v2[i]);
    }
    for(i=0;i<4;i++){
        printf("Digite %d valores: ",i);
        scanf("%d", &v3[i]);
    }
    for(i=0;i<4;i++){
        v[i]=v1[i];
        v[i+4]=v2[i];
        v[i+8]=v3[i];
    }
    for(i=0;i<11;i++){
        for(j=i+1;j<12;j++){
            if(v[j]<v[i]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    for(i=0;i<12;i++){
        printf("%3d",v[i]);
    }


return 0;
}
