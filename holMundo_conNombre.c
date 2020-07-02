#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//DEFINIMOS NUESTRAS VARIABLES PARA LOS DATOS
	char nombre[100];

	//MANDAMOS UN MENSAJE A PANTALLA Y SOLICITAMOS EL NOMBRE
	printf("¿Cual es tu nombre?");
	scanf("%s",nombre);

	printf("! Hola %s ¡ \n",nombre);

	return 0;
}
