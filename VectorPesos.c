#include <stdio.h>

int main (int argc, char *argv[]) {
    
    float pesos[5];
    float suma = 0;  

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un peso para almacenarlo: ");
        scanf("%f", &pesos[i]);
        suma = suma + pesos[i]; 
    }

    float promedio = suma / 5;
    int cont_mayor_igual = 0;
    int cont_menor = 0; 
    
    for (int i = 0; i < 5; i++)
    {
        if (pesos[i] >= promedio)
        {
            cont_mayor_igual ++;
        }else
        {
            cont_menor ++; 
        }
        
    }

    printf("Nro. pesos mayores o iguales que el promedio: %d y pesos menores: %d  ", cont_mayor_igual, cont_menor);
    
    return 0;
}