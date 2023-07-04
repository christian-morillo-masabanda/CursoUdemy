#include <stdio.h>

int main (int argc, char *argv[]) {
    
    float base, altura; 
    printf("Introdusca la base del rectangulo:  ");
    scanf("%f", &base); 
    printf("Introduzca la altura del rectangulo:  ");
    scanf("%f", &altura);
    
    float area = base * altura; 

    printf("El area del rectangulo de base %.2f y altura %.2f es de: %.2f", base, altura, area);
    
    return 0;
}