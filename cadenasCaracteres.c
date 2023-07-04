#include <stdio.h>

int main (int argc, char *argv[]) {
    
    char cadena[100] = "Esto es una cadena"; //Acaba en \0
    char cadena2[100] = "Esto es una Cadena\0";
    char cadena3[100] = {'0','s','t','0','\0'};

    for (int i = 0; i < 100; i++)
    {
        printf("%c", cadena[i]);
    }
    printf("\n%s\n", cadena3);
    
    for (int i = 0; i < 100; i++)
    {
        printf("%c", cadena2[i]);
    }
    printf("\n%s\n", cadena3);
    printf("%c\n", cadena[3]);
   
    for (int i = 0; i < 100; i++)
    {
        printf("%c", cadena3[i]); 
    }
    printf("\n");
    char cadena4[3] = {'A'};
    printf("%c", cadena4[0]);
    printf("\n%s\n\n", cadena3);
    
    char cadena5[100]; 
    printf("Introdusca una frase:\n"); // Esto sirve para que ingrese la cadena
    gets(cadena5); 
    printf("La frase que escribio es: %s", cadena5); 
    

    return 0;
}