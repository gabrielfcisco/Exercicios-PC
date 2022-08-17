#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int N;

    printf("Quantos livros serao catalogados?: ");
    scanf("%d", &N);

    char title[N][301], editora [N][51], autor[N][51], editora1[51];
    int cod[N];
    float value[N];

    for (int i=0; i<N; i++){

        printf("\n>>> LIVRO %d", i+1);

        printf("\nCodigo: ");
        scanf("%d", &cod[i]);

        getchar();
        printf("\nTitulo: "); scanf("%[^\n]", title[i]);

        getchar();
        printf("\nEditora: "); scanf("%[^\n]", editora[i]);

        getchar();
        printf("\nAutor: "); scanf("%[^\n]", autor[i]);

        printf("\nPreco: "); scanf("%f", &value[i]);
    }

    getchar();
    printf("\nDigite o nome da Editora que deseja os livros: ");
    scanf("%[^\n]", editora1);

    printf("\n====================================================\n")

    printf("\nCodigo\t\tTitulo\t\tEditora\t\tAutor\t\tPreco\n");

    for (int i=0; i<N; i++){

        if(stricmp(editora1, editora[i])==0)
          printf("%d\t%s\t%s\t%s\tR$ %.2f\n", cod[i], title[i], editora[i], autor[i], value[i]);
    }

    return 0;
}
