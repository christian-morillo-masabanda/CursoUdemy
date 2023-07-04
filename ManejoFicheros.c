#include <stdio.h>

int main (int argc, char *argv[]) {
    
    FILE *f; 
    //lectura
    /*f = fopen("prueba.txt", "r"); 
    char *linea;

    while (feof(f) == 0)
    {
        fscanf(f, "%s", linea);
        printf("%s\n", linea); 
    }
    */

   //escritura 
   /*f = fopen("prueba.txt", "w");
    char *cadena = "esta es una cadena de prueba";
    fprintf(f, "%s\n", cadena); 

    fclose(f);*/

    f = fopen("prueba.txt", "a");
    char  *cadena = "Esta es otra cosa cadena de prueba";
    fprintf(f,"%s\n", cadena);
    fclose(f);  
    
    return 0;
}