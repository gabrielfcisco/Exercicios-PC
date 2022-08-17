#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* encode(char* str, int* key) {
   int i = 0;
   char *frase;
   srand(time(NULL));
   *key= 1+(rand() % 26);

   if ((frase = (char*) malloc(strlen(str)*sizeof(char)))==NULL) exit(1);
 
   while (str[i] != '\0') {
      frase[i] = str[i] - (*key);
      i++;
   }
   frase[i]='\0';


   return (frase);
}

char* decode(char* str, int* key) {
   int i = 0;
   char *frase;

   if ((frase = (char*) malloc(strlen(str)*sizeof(char)))==NULL) exit(1);
 
   while (str[i] != '\0') {
      frase[i] = str[i] + *key; 
      i++;
   }
   frase[i]='\0';

   return (frase);
}

char* getstr(){

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
 
int main() {
 
   char *frase, *strencode, *strdecode;
   int key;
 
   frase = getstr();
 
   strencode = encode(frase, &key);
   strdecode = decode(strencode, &key);
   printf("\nFrase criptografada : %s", strencode);
   printf("\nFrase descriptografada : %s", strdecode);
 
    return 0;
}