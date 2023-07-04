#include <stdio.h>
#include <stdlib.h>

struct producto
{
    int codigo; 
    char descripcion[50];
    float precio; 
};




int main (int argc, char *argv[]) {
    
    struct producto *prod;

    prod = malloc(sizeof(struct producto));

    printf("Introduce el codigo: \n");
    scanf("%d", &prod->codigo); 
    printf("Introduce la descripcion: \n"); 
    scanf("%s", prod->descripcion); 
    printf("Introduce el precio: \n");
    scanf("%f", &prod->precio); 

    printf("Codigo de articulo: %d\n", prod->codigo);
    printf("Descripción: %s\n", prod->descripcion);
    printf("Precio: %.2f\n", prod->precio);
    
    free(prod);
    prod = NULL;
    
    
    
    
    
    
    return 0;
}