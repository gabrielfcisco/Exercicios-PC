#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
    char RA[9];
    char nome[51];
    int idade;
    float nota;
    };

typedef struct dados dados;

int main()
{
    int N;
    dados alunos[50];

    do{
        printf("Digite quantos alunos deseja catalogar (tam max. 50):");
        scanf("%d", &N);
    } while(N<0 || N>50);

    for(int i=0; i<N; i++){

        printf("\n>>> ALUNO %d", i+1); getchar();
        printf("\nRA: "); scanf("%[^\n]", alunos[i].RA); getchar();
        printf("\nNome: "); scanf("%[^\n]", alunos[i].nome);
        printf("\nIdade: "); scanf("%d", &alunos[i].idade);
        printf("\nNota: "); scanf("%f", &alunos[i].nota);
    }
    
    //Exercicio 03
    
    printf("\n============= Exercicio 03 =============\n");
    
    printf("\n\n>>> Alunos Aprovados <<<");

    for (int i=0; i<N; i++){

        if(alunos[i].nota>=5){

        printf("\n\n>>> ALUNO %d", i+1);
        printf("\nRA: %s", alunos[i].RA);
        printf("\nNome: %s", alunos[i].nome);
        printf("\nIdade: %d", alunos[i].idade);
        printf("\nNota: %.1f", alunos[i].nota);
        }
        
    }
    
    //Exercicio 04
    
    printf("\n============= Exercicio 04 =============\n");
    
    for (int i=0; i<N; i++){

        if(alunos[i].nota<5){
            
           alunos[i].nota=alunos[i].nota+(0.1*alunos[i].nota);
        }
        
        printf("\n\n>>> ALUNO %d", i+1);
        printf("\nRA: %s", alunos[i].RA);
        printf("\nNome: %s", alunos[i].nome);
        printf("\nIdade: %d", alunos[i].idade);
        printf("\nNota: %.1f", alunos[i].nota);
        
    }
    
    //Exercicio 05
    
    printf("\n============= Exercicio 05 =============\n");
    
    char RAv[9];
    int k=0; //Variavel de controle
    
    printf("\n\n>>> Digite o RA do aluno que deseja buscar: ");
    getchar(); scanf("%[^\n]", RAv);
    
    for (int i=0; i<N; i++){

        if(strcmp(alunos[i].RA, RAv)==0){

        printf("\n\n>>> ALUNO %d", i+1);
        printf("\nRA: %s", alunos[i].RA);
        printf("\nNome: %s", alunos[i].nome);
        printf("\nIdade: %d", alunos[i].idade);
        printf("\nNota: %.1f", alunos[i].nota);
        k++;
        }

    }
    
    if (k=0)
        printf("RA nao existe no sistema");
   
    //Exercicio 06
    
    printf("\n============= Exercicio 06 =============\n");
    
    float notav;
    
    printf("\n\n>>> Digite o RA do aluno que deseja alterar a nota: ");
    getchar(); scanf("%[^\n]", RAv);
    
    for (int i=0; i<N; i++){

        if(strcmp(alunos[i].RA, RAv)==0){
      
        printf("\nNota atual: %.1f", alunos[i].nota);
        printf("\nDigite a nota nova:" );
        getchar(); scanf("%f",  &alunos[i].nota);
        
        }

    }
    
    for (int i=0; i<N; i++){
        
        printf("\n\n>>> ALUNO %d", i+1);
        printf("\nRA: %s", alunos[i].RA);
        printf("\nNome: %s", alunos[i].nome);
        printf("\nIdade: %d", alunos[i].idade);
        printf("\nNota: %.1f", alunos[i].nota);
        
    }
    
    
    return 0;
}