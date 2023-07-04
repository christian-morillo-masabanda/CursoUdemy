#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int numero;
    printf("Escriba un numero de 1 al 7: ");
    scanf("%d", &numero);
    switch (numero)
    {
    case (1):
        printf("Es el primer dia de la semana: Lunescase (1):");
        break;
    case (2):
        printf("Es el primer dia de la semana: Martes"); 
        break;
    case (3):
        printf("Es el primer dia de la semana: Miercoles"); 
        break;
    case (4):
        printf("Es el primer dia de la semana: Jueves"); 
        break;
    case (5):
        printf("Es el primer dia de la semana: Viernes"); 
        break;
    case (6):
        printf("Es el primer dia de la semana: Sabado"); 
        break;
    case (7):
        printf("Es el primer dia de la semana: Domingo"); 
        break;
    default:
        printf("El numero no pertenece a un dia de la semana");
        break;
    }
    
    
    
    return 0;
}