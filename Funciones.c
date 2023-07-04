#include <stdio.h>

int suma(int num1, int num2); 

int main (int argc, char *argv[]) {
    
    int num1, num2; 
    printf("Introduzca 2 numeros cualquiera: ");
    scanf("%d  %d", &num1, &num2); 
    int result = suma(num1, num2); 
    printf("La suma de los numeros es: %d\n", result);
    return 0;
}

int suma(int num1, int num2){
    int result = num1 + num2; 
    return result; 
}