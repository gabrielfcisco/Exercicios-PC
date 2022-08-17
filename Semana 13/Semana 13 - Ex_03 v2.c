#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int *vet1, *vet2;
    int n, k;

    printf("\n >>> Digite o tamanho do vetor: ");
    scanf("%d", &n);

    printf("\n >>> Digite o valor de K: ");
    scanf("%d", &k);

    vet1 = (int*) calloc(n,sizeof(int));
    vet2 = (int*) calloc(n,sizeof(int));

    if (vet1==NULL) exit(1);
    if (vet2==NULL) exit(1);

    printf("\n\nDIGITE OS ELEMENTOS DO VETOR\n================================\n");

    for(int i=0; i<n; i++){

        printf("\nElemento %d: ", i+1);
        scanf("%d", (vet1+i));

        *(vet2+i)=*(vet1+i)*k;
    }

    printf("\n\n VETOR LIDO\n===================================\n");

    for(int i=0; i<n; i++){

        printf("%4d",*(vet1+i));
    }

    printf("\n\n >>> VARIAVEL K: %d", k);

    printf("\n\n VETOR MULTIPLICADO P/ K\n==================================\n");

    for(int i=0; i<n; i++){

        printf("%4d",*(vet2+i));
    }

    free(vet1);
    free(vet2);
    return 0;
}
