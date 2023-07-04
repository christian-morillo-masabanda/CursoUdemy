#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    
    int numero = 6;
    int numero2 = 10;
    printf("El contenido de la variable numero es de: %d\n", numero);
    printf("El contenido de las variable numero y numero2 es de: %d y %d\n", numero, numero2); 
    float numero3 = 7.5; 
    printf("El contenido de la variable numero3 es de: %.2f\n", numero3); 
    char caracter = 'd'; 
    printf("El contenido de la varible alfabetica es de: %d\n", caracter);
    char caractero = 'd'; 
    printf("El contenido de la varible alfabetica es de: %c\n", caractero);
    double numero4 = 100.5; 
    printf("El contenido de la varible numerica4 es de: %f\n", numero4);

    char n; 
    printf("Escriba una letra la que desee: ");
    scanf("%c", &n); 
    int n3; 
    printf("Escriba de un numero el que desee: ");
    scanf("%d", &n3); 
    float n2; 
    printf("Escriba de un numero con decimales el que desee: ");
    scanf("%f", &n2); 
    printf("El caracter ingresado es: %c\n", n);  
    printf("El numero introducido es de: %d\n", n3);
    printf("El numero con decimales introducido es de: %.2f\n", n2); 

    


    return 0;
}