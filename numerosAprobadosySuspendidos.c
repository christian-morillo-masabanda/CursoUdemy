#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int n, contadorAprobado = 0, contadorSuspendido = 0;
    float nota; 

    printf("Introduce el numero de alumnos: "); 
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf(" Introduce la nota del alumno %d: ", i);
        scanf("%f", &nota); 
        if (nota >= 6)
        {
            contadorAprobado++; 
        }else{
            contadorSuspendido++; 
        }
    }
    
    printf("El numero de alumnos aprobados es: %d y el de alumno suspendido es: %d\n", contadorAprobado, contadorSuspendido);

    return 0;
}