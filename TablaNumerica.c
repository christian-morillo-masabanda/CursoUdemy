#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int numero; 
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    FILE *f;
    f = fopen ("Tabla.txt", "w");
    for (int i = 1; i < 11; i++)
    {
        fprintf(f,"%d\n", i*numero);
    }
    fclose(f);
    
    
    
    
    
    return 0;
}