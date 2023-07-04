#include <stdio.h>

int main (int argc, char *argv[]) {
    
    char c1,c2,c3; 

    printf("Introdusca 3 caracteres: \n");
    scanf("%c  %c  %c", &c1, &c2, &c3);
    printf("El primer el caracter es: %c\n", c1);
    printf("El segundo caracter es: %c\n", c2);
    printf("El tercer caracter es: %c", c3); 


    return 0;
}