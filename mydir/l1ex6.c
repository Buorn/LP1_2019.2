#include <stdio.h>
int main(void){

    int n, i;

    printf("Digite o numero de abastecimentos: ");
    scanf("%d", &n);

    float k[10], c[10], p[10], somakm, somal = 0, somac =0;

    for(i=0; i<n; i++){
        printf("digite sua quilometragem: ");
        scanf("%f", &k[i]);

        printf("digite quantidade de combustivel: ");
        scanf("%f", &c[i]);

        printf("digite o valor do combustivel: ");
        scanf("%f", &p[i]);
    }



    somakm=k[n-1]-k[0];
    for(i=0; i<n-1; i++){

        printf("Consumo da parada %d = %f km/l\n", i+1, (k[i+1]-k[i])/c[i]);
    }
        for(i=0; i<n; i++){
			somal += c[i];
			somac += p[i];
    }

    printf("Consumo total: %f km/l\n", somakm/somal);
    printf("Custo total com combustível: %.2f\n", somac/somakm);
    return 0;
