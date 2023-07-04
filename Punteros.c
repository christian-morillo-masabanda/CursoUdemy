#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int numero = 6;
    int *punteroANumero = &numero; 

    printf("La dirección del punteroANumero es: %p\n", &punteroANumero); 
    printf("El valor de la variable situada en la direccion de memoria a la que apunta es: %d\n", *punteroANumero);

    char cadena [30] = "esta es una cadena de prueba";
    char *punteroACadena = &cadena[0]; 

    for (int i = 0; i < 30; i++)
    {
        printf("%c", *(punteroACadena+i));
    }
    printf("\n");

    int vector [5] = {1,2,3,4,5}; 
    int *punteroAVector = &vector[0];

    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(punteroAVector+i)); 
    }
    printf("\n"); 

    struct mi_registro
    {
        int num;
        char car; 
    };
    struct mi_registro r1; 
    struct mi_registro *r2 - &r1; 
    (*r2).num = 5; 
    r2 -> car = 'a';
    
    printf("El campo num de la estructura a la que apunta r2 es: %d\n", (*r2).num);
    printf("El campo car de la estructura rl es: %c\n", r1.car); 

     
    
    return 0;
}