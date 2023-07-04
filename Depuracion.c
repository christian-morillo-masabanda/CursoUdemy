#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    
    int n_op;
    printf("Introduce numero de operaciones a realizar: ");
    scanf("%d", &n_op); 
    
    for (int i = 0; i < n_op; i++)
    {
        int oop1, oop2; 
        printf("Introduce operando 1: "); 
        scanf("%d", &oop1);
        printf("Introduce operando 2: ");
        scanf("%d", &oop2); 
        int s = suma(oop1,oop2); 
        int r = resta(oop1,oop2);
        printf("Suma = %d, Resta = %d.\n", s, r); 
    }
    printf("fin del programa.\n");
    
    
    
    
    return 0;
}