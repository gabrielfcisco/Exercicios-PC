#include <stdio.h>
#include <stdlib.h>

struct carro{
    char fab[21];
    char mod[16];
    int ano;
    float preco;
    };

typedef struct carro carro;

int main()
{
    int N;
    carro frota[50];

    do{
        printf("Digite a frota que deseja catalogar (tam max. 50):");
        scanf("%d", &N);
    } while(N<0 || N>50);

    for(int i=0; i<N; i++){
        printf("\n>>> CARRO %d", i+1); getchar();
        printf("\nFabricante: "); scanf("%[^\n]", frota[i].fab); getchar();
        printf("\nModelo: "); scanf("%[^\n]", frota[i].mod);
        printf("\nAno: "); scanf("%d", &frota[i].ano);
        printf("\nPreco: "); scanf("%f", &frota[i].preco);
    }

    printf("\n\n>>> Carros com ano maior que 2000 <<<");

    for (int i=0; i<N; i++){
        if (frota[i].ano>2000){
        printf("\n\n>>> CARRO %d", i+1);
        printf("\nFabricante: %s", frota[i].fab);
        printf("\nModelo: %s", frota[i].mod);
        printf("\nAno: %d", frota[i].ano);
        printf("\nPreco: %.2f", frota[i].preco);
        }
    }

    return 0;
}
