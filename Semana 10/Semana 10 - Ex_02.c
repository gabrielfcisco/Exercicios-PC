#include <stdio.h>
#include <stdlib.h>

struct livro{
    char tit[21];
    char aut[4][16];
    char edi[16];
    int num, ano;
    float preco;
    };

typedef struct livro livro;

int main()
{
    int N;
    livro catal[50];
    char editora[16];

    do{
        printf("Digite quantos livros deseja catalogar (tam max. 50):");
        scanf("%d", &N);
    } while(N<0 || N>50);

    for(int i=0; i<N; i++){

        printf("\n>>> LIVRO %d", i+1); getchar();
        printf("\nTitulo: "); scanf("%[^\n]", catal[i].tit); getchar();
        printf("\nEditora: "); scanf("%[^\n]", catal[i].edi);

        do{
            printf("\nNumero de Autores (max. 04): "); scanf("%d", &catal[i].num); getchar();
        }while(catal[i].num<0 || catal[i].num>4);

            for(int j=0; j<catal[i].num; j++){
                printf("\nAutor %d: ", j+1); scanf("%[^\n]", catal[i].aut[j]); getchar();
            }

        printf("\nAno: "); scanf("%d", &catal[i].ano);
        printf("\nPreco: "); scanf("%f", &catal[i].preco);
    }

    getchar();
    printf("\nDigite o nome da editora:");
    scanf("%[^\n]", editora);

    printf("\n\n>>> Livros da Editora %s <<<", editora);

    for (int i=0; i<N; i++){

        if(stricmp(catal[i].edi, editora)==0){

        printf("\n\n>>> LIVRO %d", i+1);
        printf("\nTitulo: %s", catal[i].tit);
        printf("\nEditora: %s", catal[i].edi);

            for(int j=0; j<catal[i].num; j++){
                printf("\nAutor %d: %s", j+1, catal[i].aut[j]);
            }

        printf("\nAno: %d", catal[i].ano);
        printf("\nPreco: %.2f", catal[i].preco);
        }
    }

    return 0;
}
