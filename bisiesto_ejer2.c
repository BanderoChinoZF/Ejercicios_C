#include <stdio.h>

int main()
{
    //Declaracion de vectores y variables
    int regular[]={0,3,3,6,1,4,6,2,5,0,3,5};
    int bisiesto[]={0,3,4,0,2,5,0,3,6,1,4,6};
    int d,m,a;

    //Para simplificar el algoritmo vamos a dividirlo en partes más pequeñas

    int result1,result2,result3,result4,result5;

    printf("Introduce un dia de la semana en numero: ");
    scanf("%d",&d);
    d = d+1;
    printf("Introduce un mes en numero: ");
    scanf("%d",&m);
    printf("Introduce un a%co en numero: ",164);
    scanf("%d",&a);

    //comprobamos primero si el año es bisiesto o es regular
    //si es bisiesto, asignamos a m la posición del vector bisiesto -1
    //si es regular, asignamos a m la posición del vector regular -1
    if((a%4==0) && !(a%100==0))
    {
        m=bisiesto[m-1];
    }
    else if (a%400==0)
    {
        m=bisiesto[m-1];
    }
    else
    {
        m=regular[m-1];
    }

    //Resolvermos la fórmula poco a poco

    result1=(a-1)%7;
    result2=(a-1)/4;
    result3=(3*(((a-1)/100)+1))/4;
    result4=(result2-result3)%7;
    result5=d%7;
    d=(result1+result4+m+result5)%7;

    //resuelto el dia, con un switch case mostramos en pantalla lo que corresponda.

    switch(d)
    {
        case 0:
            printf("El dia siguiente es Domingo\n");
            break;
        case 1:
            printf("El dia siguiente es Lunes\n");
            break;
        case 2:
            printf("El dia siguiente es Martes\n");
            break;
        case 3:
            printf("El dia siguiente es Miercoles\n");
            break;
        case 4:
            printf("El dia siguiente es Jueves\n");
            break;
        case 5:
            printf("El dia siguiente es Viernes\n");
            break;
        case 6:
            printf("El dia siguiente es Sabado\n");
            break;
    }
    system("PAUSE");

        return 0;
}