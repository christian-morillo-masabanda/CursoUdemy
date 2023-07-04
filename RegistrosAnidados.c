#include <stdio.h>

int main (int argc, char *argv[]) {
    
    struct tipo1 
    {
        int entero1; 
        char caracter1;
    };
    struct tipo2 
    {
        float real1;
        struct tipo1 variable1;
    };
    
    struct tipo2 variable2 = {5.5, {7,'c'}}; 
    
    printf("%d", variable2.variable1.entero1);
    
    
    
    return 0;
}