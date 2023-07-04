#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int informacion[3][4] = {{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int suma_temp_baja = 0, suma_temp_media = 0, suma_temp_alta = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 1)
            {
                suma_temp_baja = suma_temp_baja + informacion[i][j];
            }
            if (j == 2)
            {
                suma_temp_media = suma_temp_media + informacion[i][j]; 
            }
            if (j == 3)
            {
                suma_temp_alta = suma_temp_alta + informacion[i][j];
            }            
        }
        
    }
    
    float promedio_temp_baja = suma_temp_baja/3;
    float promedio_temp_media = suma_temp_media/3;
    float promedio_temp_alta = suma_temp_alta/3; 
    
    printf("Promedio temporada baja: %.2f\n Promedio temporada media: %.2f\n Promedio de temporada alta: %.2f\n", promedio_temp_baja, promedio_temp_media, promedio_temp_alta);
    
    return 0;
}