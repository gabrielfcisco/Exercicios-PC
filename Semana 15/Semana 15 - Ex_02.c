#include <stdio.h>
#include <stdlib.h>

void ler_vetor(int *n, int* *X);
int** aloca_matriz(int n, int m);
int** monta_matriz(int n, int m, int* *X, int* *Y);
void imprime_matriz(int n, int m, int** *mat);

int main(){
      int *X, *Y, **mat;
      int N, M;
      ler_vetor(&N, &X);
      ler_vetor(&M, &Y);
      mat=monta_matriz(N, M, &X, &Y);
      imprime_matriz (N, M, &mat);
      return 0;
}

void ler_vetor(int *n, int* *X){

    printf("\n>>> Digite o numero de elementos do vetor:");
    scanf("%d", n);

    if(((*X)=(int*)calloc(*n, sizeof(int*)))==NULL)exit(1);

    printf("\n ELEMENTOS DO VETOR \n==================================\n");
    for(int i=0; i<*n; i++){
        printf("Elemento [%d]: ",i+1);
        scanf("%d", (*X)+i);
    }
}

int** monta_matriz(int n, int m, int* *X, int* *Y){
    int**matriz;

    matriz=aloca_matriz(n, m);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            matriz[i][j]= (*X)[i] * (*Y)[j];
    }

    return matriz;
}

int** aloca_matriz(int n, int m){
    int**matrix;
    if((matrix =(int**)calloc(n, sizeof(int*)))==NULL) exit(1);

    for(int i=0; i<n; i++){
        if((matrix[i]= (int*)calloc(m,sizeof(int)))==NULL) exit(1);
    }
    return matrix;
}

void imprime_matriz(int n, int m, int** *mat){
    printf("\n MATRIZ \n==================================\n");
    for(int i=0; i<n; i++){
    printf("\n");
        for(int j=0; j<m; j++)
        printf("%d\t",(*mat)[i][j]);
    }
}
