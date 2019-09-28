#include <stdio.h>
#include <string.h>

//criação da estrutura
	struct ficha{
		// declaração das variaveis da estrutura
		char nome[10];
		float nota1;
		float nota2;
		float media;
	};

int main(void){

	int i;
	char aux[10];
	float aux1, media=0;
    //declarando uma variável para a estrutura criada
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
            aluno[i].media = (aluno[i].nota1+aluno[i].nota2)/2;
		}

        for(i=0; i<5; i++){
            for(j=i+1; j<5;j++){
                if(aluno[i].media <= aluno[j].media){
                    strcpy(aux, aluno[i].nome);
                    strcpy(aluno[i].nome, aluno[j].nome);
                    strcpy(aluno[j].nome, aux);

                    aux1 = aluno[i].media;
                    aluno[i].media = aluno[j].media;
                    aluno[j].media = aux1;
                }
            }
        }		for(i=0; i<5; i++){
            media+=aluno[i].media;
		}

		for(i=0; i<2; i++){
            if(aluno[i].media > media){
                printf("nome: %s\n", aluno[i].nome);
                printf("nota1: %f\n", aluno[i].nota1);
                printf("nota2: %f\n", aluno[i].nota2);
                printf("media: %f\n", aluno[i].media);
            }
		}
	return 0;

}
