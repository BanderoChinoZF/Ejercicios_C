//INCLUIMOS LAS LIBRERIAS PARA ENTRADA Y SALIDA DE DATOS
#include <stdio.h>
#include <stdlib.h>

//PROGRAMA PARA CALCULAR LA SUMA DE 'n' NUMEROS
//PARA REALIZAR DICHA SUMA OCUPAREMOS LA FORMULA DE GAUSS

int main()
{
    //DEFINIMOS NUESTRAS VARIABLES
    //Si deseamos calcular otro numero solo cambiamos el valor de la variable
    int numero = 1520;
    int suma;

    //IMPRIMIMOS EN PANTALLA
    printf("Suma de los primeros 150 numeros positivos. \n");

    //REALIZAMOS LAS OPERACIONES
    suma = ((numero*(numero+1))/2);

    printf("\nEl resultado de la suma de los 150 primeros numero es: %d \n",suma);


}
