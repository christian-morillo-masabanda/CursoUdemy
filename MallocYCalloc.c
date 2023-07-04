#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    
    /*int *puntero; 

    puntero = malloc(4*sizeof(int)); */   
    
    int *vector, n;
    printf("Introduce el numero de elementos del vector\n");
    scanf("%d", &n); 

    //malllo+++
    vector = malloc(n*sizeof(int));

    if (vector == NULL)
    {
        printf("Error al intentar reservar la memoria \n");
    }
    else{
        for (int i = 0; i < n; i++)
        {
            printf("elemento en la posición %d es %d\n ", i, vector[i]); 
        }
        
    }

    // calloc
    vector = calloc(n,sizeof(int));

    if (vector == NULL)
    {
        printf("Error al intentar reservar la memoria \n");
    }
    else{
        for (int i = 0; i < n; i++)
        {
            printf("elemento en la posición %d es %d\n ", i, vector[i]); 
        }
        
    }
    
    
    
    return 0;
}