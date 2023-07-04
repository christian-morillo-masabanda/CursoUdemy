#include <stdio.h>

int main (int argc, char *argv[]) {

    int suma = 0, contador = 0, numero = -1;
    printf("Ingrese cualquier numero el ciclo solo se rompe si ingresa 0.\n");
    while (numero != 0)
    {
        printf("Introdusca un numero: ");
        scanf("%d", &numero); 
        contador++; 
        suma += numero;  
    }
    
    float promedio = suma/contador; 
    printf("La suma de los valores ingresados es de %d y el valor promedio es %.2f.", suma, promedio);


    return 0;
}