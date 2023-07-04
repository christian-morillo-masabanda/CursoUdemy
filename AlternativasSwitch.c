#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int n = 0;
    switch (n)
    {
    case (1):{
        printf("La variable contiene 1");
        break;
    }
    case (2):{
        printf("La variable contiene 2");
        break;
    } 
    default:{
        printf("La variable no contiene los valores 1 al 2");
        break;
    }
    }

    return 0;
}