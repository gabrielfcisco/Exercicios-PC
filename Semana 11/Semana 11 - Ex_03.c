#include <stdio.h>
#include <stdlib.h>
#define N 10

void ler_vetor(float V[]);

float calc_media(float V[]);

int main()
{
    float notas[N], media;

    printf("\n========= C A L C U L O  D A  M E D I A ===========\n");

    printf("\n>>> Digite as notas:\n");

    ler_vetor(notas);

    media = calc_media(notas);

    printf("\n=============================================================================\n");

    printf("\n>>> MEDIA DAS NOTAS: %.2f", media);

    return 0;

}

void ler_vetor(float V[])
{
    for (int i=0; i<N; i++){
        printf("\nNota %d: ", i+1);
        scanf("%f", &V[i]);
    }
}

float calc_media(float V[])
{
    float soma=0, m;

    for(int i=0; i<N; i++){
        soma+=V[i];
    }

    m = soma/N;

    return m;
}
