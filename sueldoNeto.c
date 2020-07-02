
//INCLUIMOS LAS LIBRERIAS PARA ENTRADA Y SALIDA DE DATOS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DEFINIMOS NUESTRAS VARIABLES
    int ht;             //horas trabajadas
    float th;           //tarifa por hora
    float imp;          //impuesto al sueldo del trabajador
    float sueldoNeto;   //sueldo neto del trabajador

    //VARIABLES AUXILIARES
    //NOS AYUDAN PARA LOS CALCULOS DEL SUELDO
    float auxiliar1;
    float auxiliar2;

    //IMPRIMIMOS EN PANTALLA Y SOLICITAMOS DATOS AL USUARIO
    printf("Calculo de sueldo neto del trabajador\n");

    printf("Ingrese el numero de horas trabajadas --> \n");
    scanf("%d",&ht);

    printf("¿Cual es la tarifa horaria?\n");
    scanf("%f",&th);

    printf("¿Cual es la tasa de impuesto '%' ? \n");
    scanf("%f",&imp);

    //REALIZAMOS LAS OPERACIONES
    auxiliar1 = ht * th;
    auxiliar2 = auxiliar1 * imp;

    sueldoNeto = auxiliar1 - auxiliar2;

    //IMPRIMIMOS EN CONSOLA EL SUELDO NETO
    printf("\n");
    printf("\n El sueldo neto es : %.3f MXM", sueldoNeto);
    printf("\n");

    return 0;
}
