#include <stdio.h>

int main (int argc, char *argv[]) {
    
    printf("Este ciclo va de 1 en 1.\n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", i); 
    }
    printf("Este ciclo va de 2 en 2.\n");
    for (int j = 0; j <= 20; j = j+2)
    {
        printf("%d\n", j);
    }
    
    return 0;
}