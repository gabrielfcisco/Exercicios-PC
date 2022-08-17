#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void imprimir_vetor(int *vet, int n){

    for(int i=0; i<n; i++){

        printf("%4d",*(vet+i));
    }
}

int main()
{
    int *vet1, *vet2;
    int n;

    printf("\n >>> Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vet1 = (int*) calloc(n,sizeof(int));
    vet2 = (int*) calloc(n,sizeof(int));

    if (vet1==NULL) exit(1);
    if (vet2==NULL) exit(1);

    printf("\n\nDIGITE OS ELEMENTOS DO VETOR\n================================\n");

    for(int i=0; i<n; i++){

        printf("\nElemento %d: ", i+1);
        scanf("%d", (vet1+(n-1-i)));

    }


    printf("\n\n VETOR LIDO\n===================================\n");

    imprimir_vetor(vet1, n);


    free(vet1);
    free(vet2);
    return 0;
}
