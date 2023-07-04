#include <stdio.h>

int main (int argc, char *argv[]) {
    
    float vector[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Introduce un numero real: "); 
        scanf("%f", &vector[i]);
    }
    
    float  *puntero  = &vector[0];
    float media = 0; 

    for (int i = 0; i < 5; i++)
    {
        media = media + *(puntero+i);
    }
    media = media/5; 

    printf("La medida de los variables del vector es %.2f\n", media); 


    
    return 0;
}