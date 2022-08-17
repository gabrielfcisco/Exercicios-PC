#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_palavra(char str[]);

int main()
{
    char frase[51];
    int words;

    printf("\n>>> Digite uma frase: ");
    scanf("%[^\n]", frase);

    words=conta_palavras(frase);

    printf("\n=============================================================================\n");

    printf("\n>>> FRASE LIDA: %s", frase);
    printf("\n>>> NUMERO DE PALAVRAS: %d", words);

    return 0;

}

int conta_palavras(char str[])
{
    int word=1;

    for (int i=0; i<strlen(str); i++){
        if(isspace(str[i]))
        word++;
    }

    return word;

    }

