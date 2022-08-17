#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ler_string();
int conta_vogal (char *frase);


int main()
{
    int vogal;
    char *frase;

    frase = ler_string();

    vogal = conta_vogal(frase);

    printf("\n\nFrase lida: %s", frase);

    printf("\n\nVogais na frase: %d\n\n\n", vogal);

    free(frase);
    return 0;

}

char *ler_string(){

    char *frase;
    int i=0;

    printf("\n\n>>> Digite uma frase:\n");

    frase = NULL;

    do{
        if ((frase = (char*) realloc(frase,(i+1)*sizeof(char)))==NULL) exit(1);
        scanf("%c", &frase[i]);
    } while(frase[i++] != '\n');

    frase[i-1] = '\0';

    return frase;
}

int conta_vogal(char *frase){

    int v=0;
    for(int i=0; i<(strlen(frase)); i++){
        switch(frase[i])
        case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
            v++;

    }

    return v;
}
