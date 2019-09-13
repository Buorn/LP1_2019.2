#include <stdio.h>
#include <string.h>


	struct ficha{
		
		char nome[10];
		float nota;
	};




int main(){
	
	int i, j;
	float soma=0, media, aux;
	char aux2[10];

	struct ficha aluno[5];
	
	for(i=0; i<5; i++){
		printf("Digite o nome do aluno: ");
		scanf("%s", aluno[i].nome);
	
		printf("Digite a nota do aluno: ");
		scanf("%f", &aluno[i].nota);
	

	}
	for(i=0; i<5; i++){
	  printf("nome: %s\n", aluno[i].nome);
	
	  printf("nota1: %f\n", aluno[i].nota);
		  
	    soma+=aluno[i].nota;
					
	}
	media=soma/5;
	printf("Media: %2.2f\n", media);
	for(i=0; i<5; i++){
	        for(j=i+1; j<5; j++){
	            if(aluno[j].nota>aluno[i].nota){
	                aux = aluno[i].nota;
	                strcpy(aux2, aluno[i].nome);
			        aluno[i].nota = aluno[j].nota;
	                strcpy(aluno[i].nome, aluno[j].nome);
			        aluno[j].nota=aux;
			        strcpy(aluno[j].nome,aux2);
				        
		        }
	            
	       }
	}

	for(i=0; i<2; i++){  	  
	    printf("%s: %2.2f \n",aluno[i].nome, aluno[i].nota);

	}

	return 0;

}