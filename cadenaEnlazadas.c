#include <stdio.h>

int main (int argc, char *argv[]) {
    
    char cadena1[50], cadena2[50], cadena3[50], cadena4[50];

    printf("Introdusca una frase: ");
    gets(cadena1); 
    printf("Introdusca una segunda frase: ");
    gets(cadena2);
    printf("Introdusca una tercera frase: ");
    gets(cadena3);
    printf("Introdusca una cuarta frase: ");
    gets(cadena4); 
    
    printf("%s - %s - %s - %s", cadena1,cadena2,cadena3,cadena4); 



    return 0;
}