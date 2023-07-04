struct empleado 
{
    char nombre[255];
    int id; 
    float sueldo; 
    int Horas; 
};

void mostrarMenu(); 
void listaEmpleados(struct empleado empleados[100], int num_emp); 