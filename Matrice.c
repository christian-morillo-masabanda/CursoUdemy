#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int n[3][2] = {{0,1},{2,3},{4,5}};

    n[2][0] = 40; 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\n", n[i][j]); 
        }
        
    }
    
    printf("Imprimir los valores en parejas de guardado.\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}