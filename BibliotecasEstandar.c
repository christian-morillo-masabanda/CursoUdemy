#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include <time.h>


int main (int argc, char *argv[]) {
    
    //ctype.h: isdigit
    printf("%d\n", isdigit('a')); 
    //math.h: sqrt
    printf("%.2f\n", sqrt(7)); 
    //limits.h; INT_MAX
    printf("%d\n", INT_MAX); 
    //stdlib.h: rand 
    srand(time(NULL)); 
    printf("%d\n", rand() % 11);
    //string.h: strlen
    printf("%d\n", strlen("Cadena de prueba "));
    //time.h: time, difftimo 
    time_t comienzo, final;
    comienzo = time (NULL); 
    for (int i = 0; i < 100000; i++)
    {
        printf("-");
    }
    final = time(NULL); 
    printf("%f\n", difftime(comienzo, final));

    
    
    
    return 0;
}