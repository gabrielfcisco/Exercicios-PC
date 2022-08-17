#include <stdio.h>
#include <stdlib.h>

float* ler_vetor(int *n);
void maior_menor(float *vet, int n, float* *maior, float* *menor);
void imprime_ma_me(float* *Pmaior, float* *Pmenor);

int main(){
      float * vetor, *Pmaior, *Pmenor;
      int N;
      vetor= ler_vetor(&N);
      maior_menor(vetor, N, &Pmaior, &Pmenor);
      imprime_ma_me (&Pmaior, &Pmenor);
      return 0;
}

float* ler_vetor(int *n){
    float*vet;
    printf("\n>>> Digite o numero de elementos do vetor:");
    scanf("%d", n);

    if((vet=(float*)calloc(*n, sizeof(float)))==NULL)exit(1);

    printf("\n ELEMENTOS DO VETOR \n==================================\n");
    for(int i=0; i<*n; i++){
        printf("Elemento [%d]: ",i+1);
        scanf("%f", &vet[i]);
    }
   return vet;
}

void maior_menor(float *vet, int n, float* *maior, float* *menor){
    float *aux_maior, *aux_menor;

    aux_maior=aux_menor=&vet[0];

    for(int i=1; i<n; i++){
        if(vet[i]>*aux_maior)
            aux_maior=&vet[i];
        else if(vet[i]<*aux_menor)
            aux_menor=&vet[i];
    }
    *maior=aux_maior;
    *menor=aux_menor;
}

void imprime_ma_me(float* *Pmaior, float* *Pmenor){

    printf("\n\nMaior:  %.1f      Menor:  %.1f",  **Pmaior,  **Pmenor);

}
