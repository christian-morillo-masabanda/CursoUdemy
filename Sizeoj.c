#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int n_int = sizeof(int);
    int n_char = sizeof(char); 
    int n_long = sizeof(long);

    struct estructura
    {
        int entero;
        char caracteres[10]; 
    };
    
    int n_struct = sizeof(struct);
    
    float vector[5]; 
    int n_vector = sizeof(vector); 

    printf("Tamaño de 1 entero = %d\n", n_int); 
    printf("Tamaño de 1 char = %d\n", n_char);
    printf("Tamaño de 1 long = %d\n", n_long);
    printf("Tamaño de 1 struct = %d\n", n_struct); 
    printf("Tamaño de 1 vector = %d\n", n_vector);
    
    return 0;
}