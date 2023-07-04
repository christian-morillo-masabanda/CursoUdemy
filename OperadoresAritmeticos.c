int main (int argc, char *argv[]) {
    
    //Operadores Relacionales

    /* 
    + ; Suma
    - ; Resta
    * ; Multiplicación 
    / ; División
    % ; Resto(Esto de vuelde el valor residual de la división ej: 5/2 = 1)
    == ; Compara que dos datos sean iguales si lo son devolvera el valor de 1 y si no lo es pues dara un 0
    != ; Compara que dos datos sean iguales si los datos no son iguales devolvera el valor de 1 y si son iguales devolvera un 0
    >  ; Compara si un dato es mayor
    >= ; Compara si un dato es mayor o igual 
    <  ; Compara si un dato es menor 
    <= ; Compara si un dato es menor o igual 
    */

    //Operadores Lógicos 

    /* 
    ||  ; sirve para encadenar mas comparaciones dentro de un mismo ciclo,
          esta función devolvera el valor de 1 si una de las comparaciones dentro de la misma se cumple, 
          pero si no se cumple ninguna de las comparaciones establecidas devolvera un 0
    &&  ; sirve para encadenar mas comparaciones dentro de un misma ciclo,
          esta función devolvera el valor de 1 si todas la funciones se cumplen, 
          pero si alguna o todas no se cumplen devolvera el valor de 0
    not ; invierte el resultado de las comparaciones ej.:
          ((5 == 7), devolvería el valor de 0,
          pero si se coloca el not;
          (not 5 == 3), devolvería el valor de 1)   
    */

   //Operadores de asiganción 
   /*
   =  ; Asigna el valor a la variable 
   += ; Al asignar dos valores estos se sumaran y se asignara el valor a una de las variables
   -= ; Al asignar dos valores estos se restaran y se asignara el valor a una de las variables
   *= ; Al asignar dos valores estos se multiplicaran y se asignara el valor a una de las variables
   /= ; Al asignar dos valores estos se dividiran y se asignara el valor a una de las varibles
   */

    // Separador de lineas 
    // \n

    int numero_entero = 16; 
    float numero_real_simple = 5.16;
    double numero_real_doble = 1000.4567;
    char caracter = 't'; 
    
    return 0;
}