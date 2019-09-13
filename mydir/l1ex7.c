#include <stdio.h>


	struct ficha{
		
		char nome[10];
		float nota1;
		float nota2;
	};




int main(void){
	
	int i;

	struct ficha aluno[5];
	
	for(i=0; i<5; i++){
		printf("Digite o nome do aluno: ");
		scanf("%s", aluno[i].nome);
	
		printf("Digite a nota 1 do aluno: ");
		scanf("%f", &aluno[i].nota1);
	
		printf("Digite a nota 2 do aluno: ");
		scanf("%f", &aluno[i].nota2);
	}
		for(i=0; i<5; i++){
		printf("nome: %s\n", aluno[i].nome);
	
		printf("nota1: %f\n", aluno[i].nota1); 
	
		printf("nota2: %f\n", aluno[i].nota2);

	}
	return 0;

}
