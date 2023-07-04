#include <stdio.h>

int main (int argc, char *argv[]) {
    

    int vector[10] = {0,1,2,3,4,5,6,7,8,9};

    printf("%d", vector[3]);  

    vector[9] = 100; 
    vector[5] = 500;
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vector[i]);
    }
    

    return 0;
}