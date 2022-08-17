#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler_frase(char frase[]);

int conta_prep(char frase[], char prep[]);

int main()
{
    char frase[101];
    char prep [5];
    int K1, K2, K3;

    ler_frase(frase);

    strcpy(prep, "com");
    K1 = conta_prep(frase, prep);

    strcpy(prep, "por");
    K2 = conta_prep(frase, prep);

    strcpy(prep, "que");
    K3 = conta_prep(frase, prep);


    printf("\n=============================================================================\n");

    printf("\n>>> FRASE LIDA: %s", frase);
    printf("\n>>> PREPOSICOES:\n com: %d\n por: %d\n que: %d", K1, K2, K3);

    return 0;

}

int conta_prep(char frase[], char prep[])
{
    int p=0, k, j;
    for (int i=0; frase[i] != '\0'; i++){

        if(frase[i]==prep[0]&&(frase[i+strlen(prep)]==' '|| frase[i+strlen(prep)]=='\0') && i==0) {

            for(j=i, k=0; prep[k] != '\0'; k++, j++){

                if(frase[j]==prep[k])
                    p++;
            }
        }
        else if(frase[i]==prep[0]&&(frase[i+strlen(prep)]==' '|| frase[i+strlen(prep)]=='\0') && frase[i-1] == ' '){
          
            for(j=i, k=0; prep[k] != '\0'; k++, j++){

                if(frase[j]==prep[k])
                    p++;
            }  
        }
    }

    return p/strlen(prep);

    }

void ler_frase(char frase[])
{
    printf("\n>>> Digite uma frase: ");
    scanf("%[^\n]", frase);
}

