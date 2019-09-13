#include <stdio.h> 
int main(void){
    
    int n, i;
    
    printf("Digite o numero de abastecimentos: ");
    scanf("%d", &n);
    
    float k[10], c[10], p[10], somakm =0, somal = 0, somac =0;
    
    for(i=0; i<n; i++){
        printf("digite sua quilometragem: ");
        scanf("%f", &k[i]);
        
        printf("digite quantidade de combustivel: ");
        scanf("%f", &c[i]);
        
        printf("digite o valor do combustivel: ");
        scanf("%f", &p[i]);
    }
    for(i=0; i<n; i++){
    	
    	printf("Consumo da parada %d = %f km/l\n", i+1, (k[i+1]-k[i])/c[i]);
			somakm += k[i+1]-k[i];
			somal += c[i];
			somac += p[i];   
    }
    printf("Consumo total: %f km/l\n", somakm/somal);
    printf("Custo total com combustível: %f/n", somac);
    return 0;
        
    }
