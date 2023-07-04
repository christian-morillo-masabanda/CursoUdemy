#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int  numero, numero2, numero3;

    printf("Ingrese tres numeros positivos o negativos:  ");
    scanf("%d  %d  %d", &numero, &numero2, &numero3); 


    if (numero > 0 && numero2 > 0 && numero3 > 0)
    {
        printf("Los numeros son positivo\n");
    }
    else if (numero > 0 || numero2 > 0 || numero3 > 0 ){
        printf("Algunos son positivos y negativos\n");
    }
    else if (numero < 0 && numero2 < 0 && numero3 < 0){
        printf("Los numeros son negativo\n");
    }
    else{
        printf("Los numeros son igual a 0.\n");
    }

    printf("Fin del programa.\n");
    
    
    
    
    return 0;
}