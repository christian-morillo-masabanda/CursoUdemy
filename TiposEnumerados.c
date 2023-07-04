#include <stdio.h>

int main (int argc, char *argv[]) {
    
    typedef enum {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo} semana; 

    semana dia_semana1 = Lunes; 

    if (dia_semana1 == 0)
    {
        printf("Estamos a lunes\n");    
    } else
    {
        printf("No estamos a lunes\n");
    }
    
    
    return 0;
}