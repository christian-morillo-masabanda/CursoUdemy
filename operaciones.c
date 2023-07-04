#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

void mostrarMenu(){
    printf("\nIntroduce la opcion que desee realizar: \n");
    printf("1- Alta empleado\n");
    printf("2- Baja empleado\n");
    printf("3- Listar empleados\n");
    printf("4- Consultar datos empleado\n");
    printf("5- Modificar sueldo\n"); 
    printf("6- Modificar horas\n"); 
    printf("7- Salir\n"); 
}

void listaEmpleados(struct empleado empleados[100], int num_emp){
    printf("Listando los datos de los empleados: \n");
    for (int i = 0; i < num_emp; i++)
    {
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("ID del empleado: %d\n", empleados[i].id);
        printf("Sueldo: %.2f\n", empleados[i].sueldo);
        printf("Horas Semanales: %d\n", empleados[i].Horas);
        printf("\n");
    }
}

int comprobarId(struct empleado empleados[100], int num_emp, int id){

    int resultado = 0; 
    for (int i = 0; i < num_emp; i++)
    {
        if (empleados[i].id == id)
        {
            resultado = 1; 
        }
    }
    return resultado

}