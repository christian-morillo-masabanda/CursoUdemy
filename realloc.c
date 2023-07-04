#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int *vector, n;
    printf("Introduce el numero de elementos del vector\n");
    scanf("%d", &n); 


    vector = malloc(n*sizeof(int));

    if (vector == NULL)
    {
        printf("Error al intentar reservar la memoria \n");
    }
    else{
        for (int i = 0; i < n; i++)
        {
            vector[i] = i;
        }
        
    }
    

    int n2 = n + 3; 
    //realloc

    int *vector2 = realloc(vector, n2); 
    if (vector2 == NULL)
    {
        printf("Error al intentar reservar la memoria.\n");
    }else{
        vector = vector2; 
    }
    for (int i = 0; i < n2; i++)
    {
        printf("%d\n", vector[i]);
    }
    

    
    
    return 0;
}