#include <stdio.h>
#include <stdlib.h>

float *ler_vetor(int *n);
void imprimir_vetor (float *vet, int n);
float calc_media(float *vet, int n);


int main()
{
    int n;
    float *vet, media;


    vet = ler_vetor(&n);

    imprimir_vetor(vet,n);

    media = calc_media(vet,n);

    printf("\n\nMedia dos elementos do vetor: %.2f", media);

    free(vet);
    return 0;

}

float *ler_vetor(int *n){

    float *vet;

    printf("\n>>>Digite a quantidade de elementos do vetor: ");
    scanf("%d", n);

    printf("\n\n>>>Digite os elementos do vetor:");

    if ((vet=(float*) calloc(*n,sizeof(float)))==NULL) exit(1);

    for (int i=0; i<*n; i++){
        printf("\nElemento [%d]: ", i+1);
        scanf("%f", &vet[i]);
    }

    return vet;
}

void imprimir_vetor (float *vet, int n){


    printf("\n>>>Vetor Lido<<<\n\n");
    for(int i=0; i<n; i++){
        printf("%8.2f", vet[i]);
    }
}

float calc_media(float *vet, int n){
    float soma=0;
    for(int i=0; i<n; i++){
        soma += vet[i];
    }

    return soma/n;
}
