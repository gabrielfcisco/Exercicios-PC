#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char frase[100], *pc;
    int i=0;


    printf("\n >>> Digite uma frase: ");
    scanf("%[^\n]", frase);

    pc = frase;

    while(*pc!='\0'){
        if(isalpha(*pc))
        i++;

        pc++;
    }

    printf("\n >>> A frase possui %d letras!", i);

    free(pc);

    return 0;
}
