#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *vet, *pmaior, *pmenor;
    int n;

    printf("\n >>> Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vet = (float*) calloc(n,sizeof(float));

    if (vet==NULL)
        exit(1);

    printf("\n\nDIGITE OS ELEMENTOS DO VETOR\n=========================\n");

    for(int i=0; i<n; i++){

        printf("\nElemtento %d: ", i+1);
        scanf("%f", &vet[i]);
    }

    pmaior = vet;
    pmenor = vet;

    for(int i=1; i<n; i++){

        if(*pmaior<vet[i])
        pmaior=&vet[i];

        else if(*pmenor>vet[i])
        pmenor=&vet[i];
    }

    printf("\n >>> Maior numero: %.2f", *pmaior);
    printf("\n >>> Menor numero: %.2f", *pmenor);

    free(vet);
    free(pmenor);
    free(pmaior);

    return 0;
}
