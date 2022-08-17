#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
   char frase[501];
   int words=1, comp;

   printf(">>>Digite uma frase:\n\n");
   scanf("%[^\n]", frase);

   comp=strlen(frase);

   for (int i=0; i<comp; i++){
   if(isspace(frase[i]))
    words++;
   }

   printf("\n>>>Frase digitada: \n\n%s", frase);
   printf("\n\n>>>Quantidade de palavras: %d", words);
   printf("\n\n\n");

   return 0;

}
