#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[501]; //string para armazenar a frase digitada
    char espaco[2]=" "; //string para concatenar com a frase para fazer a condicao funcionar
    int letras=0, par=0, i=0;

    printf(">>> Digite uma frase:\n");
    gets(frase);

    strcat(frase, espaco); //concatenar espaco ao fim da frase para funcionar o if dentro do while

    while (frase[i]!='\0'){

        if(frase[i]!=' '&& frase[i]!=','&& frase[i]!='.')
        letras++;

        else if (frase[i]==' '){
            
            if (letras%2==0){
            par++;}

        letras=0;
        }

        i++; //variavel de controle do while
    }

    printf("========================================");
    printf("\n\nFrase lida: %s", frase);
    printf("\n\n>>> Numero de palavras pares: %d", par);
}