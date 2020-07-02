//INCLUIMOS LAS LIBRERIAS PARA ENTRADA Y SALIDA DE DATOS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//PRGORAMA DEL JUEGO DE PIEDRA, PAPEL Y TIJERAS


int main()
{

    //DECLARAMOS NUESTRAS VARIABLES
    char jug1;
    char jug2;

    //MANDAMOS UN MENSAJE EN PANTALLA
    printf("BIENVENIDO AL JUEGO DE ROCA, PAPEL Y TIJERA\n");
    printf("Puedes elegir de la siguiente manera:\n");
    printf("TIJERAS: 'T' - PAPEL: 'P' - ROCA: 'R' \n");

    printf("\n ¿Cual es su eleccion jugador 1? \n");
    scanf(" %c",&jug1);

    printf("\n ¿Cual es su eleccion jugador 2? \n");
    scanf(" %c",&jug2);


    //ESTABLECEMOS LA LOGICA DEL JUEGO
    printf("\n");

    //ESTRUCUTRA SWITCH-CASE PARA LA ELECCION DEL JUGADOR 1
    switch(jug1)
    {

        //EL JUGADOR 1 ELIGIO TIJERAS
        case 'T':

            //ESTRUCTURA SWITCH-CASE PARA LA ELECCION DEL JUGADOR 2
            switch(jug2)
            {
                case 'T':
                    printf("-- Se empato el juego --");
                    break;
                case 'P':
                    printf("-- T-P Tijeras corta Papel gana el jugador 1 --");
                    break;
                case 'R':
                    printf("-- T-R Roca rompe tijeras gana el jugador 2 --");
                    break;
            }

            break;

        //EL JUGADOR 1 ELIGIO LA ROCA
        case 'R':

           switch(jug2)
            {
                case 'R':
                    printf("-- Se empato el juego --");
                    break;
                case 'P':
                    printf("-- P-R El papel envuelve a la roca, gana el jugador 2 --");
                    break;
                case 'T':
                    printf("-- T-R Roca rompe tijeras, ganó el jugador 1 --");
                    break;
            }

        //EL JUGADOR 1 ELEGIO EL PAPEL
        case 'P':

            switch(jug2)
            {
                case 'P':
                    printf("-- Se empato el juego --");
                    break;
                case 'R':
                    printf("-- P-R Papel envuelve a la roca, ganó el jugador 1 --");
                    break;
                case 'T':
                    printf("-- T-R Tijeras corta el papel, ganó el jugador 2 --");
                    break;
            }


        default:
            printf("Selecciona una opcion valida por favor.");

        }



    return 0;
}

