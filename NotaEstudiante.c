#include <stdio.h>

int main (int argc, char *argv[]) {
    
    float nota; 
    printf("Introdusca la nota del alumno: ");
    scanf("%f", &nota);

    if (nota < 5){
        printf("El alumno a suspendido la materia\n");
    }
    else if (nota == 6){
        printf("El alumno tiene buena nota\n");
    }
    else if (nota > 7 || nota < 8 ){
        printf("El alumno tiene notable nota\n");
    }
    else if (nota > 9 || nota < 10){
        printf("El alumno tiene sobresaliente nota\n");
    }
    else{
        printf("Nota introducida no valida\n");
    }
    
    printf("Fin del programa\n");
    return 0;
}