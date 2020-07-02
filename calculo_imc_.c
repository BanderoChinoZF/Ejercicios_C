#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//DEFINIMOS NUESTRAS VARIABLES PARA LOS DATOS
	float peso;
	float altura;
	float imc;

	//IMPRIMIMOS EN PANTALLA
	printf("PROGRAMA PARA EL CALCULO DE IMC (Indice De Masa Corporal) \n");

	printf("Ingresa tu peso en 'Kg' -> ");
	scanf("%f", &peso);

	printf("\n Ingresa tu estatura -> ");
	scanf("%f", &altura);

	//REALIZAMOS EL CALCULO DE IMC
	imc = peso/altura;

	//IMPRIMIMOS EN CONSOLA EL SUELDO NETO
    printf("\n");
    printf("\n Tu indice de masa corporal es : %.3f ", imc);
    printf("\n");



	return 0;
}
