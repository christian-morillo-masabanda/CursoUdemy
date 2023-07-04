#include <stdio.h>

#define nombre 3
#define PI 3.1416

int main (int argc, char *argv[]) {
    
    printf("%d\n", nombre);
    float radio; 
    printf("Escriba el radio del circulo: ");
    scanf("%f", &radio);
    printf("El area del circulo con radio %.2f es de: %.3f", radio, radio*radio*PI); 
    
    return 0;
}