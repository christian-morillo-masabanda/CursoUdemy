#include <stdio.h>

int main (int argc, char *argv[]) {
    
    struct hora_entrada
    {
        int hora;
        int minuto;
    };
    struct Entrada
    {
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };
    struct entrada entrada1; 
    
    char continuar = 's';

    while (continuar == 's')
    {
        printf("Introduce la hora de entrada: ");
        scanf("%d", &entrada1.hora1.hora);
        printf("Introduce el minuto de entrada: ");
        scanf("%d", &entrada1.hora1.minuto);
        printf("Introduce el numero de asitentes: ");
        scanf("%d", &entrada1.asistentes); 

        int total = 0; 
        int edad; 

        for (int i = 0; i < entrada1.asistentes; i++)
        {
            printf("Introduce la edad del asistente %d: ",(i+1));
            scanf("%d", &edad); 
            if (edad < 6)
            {
                total = total + 0; 
            }
            else if (edad >= 6 && edad <= 15)
            {
                total = total + 5; 
            }
            else if ((edad >= 16 && edad <= 26) || edad >65)
            {
                total = total + 8; 
            }
            else
            {
                total = total + 10;
            }
        }
        
        if (entrada1.asistentes >= 5)
        {
            entrada1.precio = total - total*0.1;
        }else
        {
            entrada1.precio = total;
        }
        
        
        printf("Hora de entrada del grupo: %d\n", entrada1.hora1.hora);
        printf("Minuto de entrada del grupo: %d\n", entrada1.hora1.minuto); 
        printf("El precio de las entradas del grupo: %.2f\n", entrada1.precio);

        printf("¿Quieres continuar con otro grupo?(S/N): ");
        scanf("%c", &continuar); 
        while (continuar == '\n')
        {
            scanf("%c", &continuar); 
        }
        

    }
    printf("Hasta la proxima..... ");     
     
    
    
    
    
    return 0;
}