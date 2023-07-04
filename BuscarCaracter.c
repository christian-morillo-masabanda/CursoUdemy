#include <stdio.h>

int main (int argc, char *argv[]) {
    
    char cadenaEntrada[50];
    char caracter;

    printf("Introdusca una frase: ");
    gets(cadenaEntrada);
    printf("Introdusca una palabra de la frase: ");
    caracter = getchar();

    int i = 0;
    int pos = -1; 
    while (cadenaEntrada[i] != '\0' && pos == -1)
    {
        if (cadenaEntrada[i] == caracter)
        {
            pos = i; 
        } 
        i = i + 1;
    } 
    
    if (pos != -1)
    {
        printf("El caracter %c se encuentra en la cadena %s en la posicion %d.", caracter, cadenaEntrada, pos);
    }
    else {
        printf("El caracter %c no se encuentra en la cadena %s", caracter, cadenaEntrada);
    }
    
    
    
    
    return 0;
}