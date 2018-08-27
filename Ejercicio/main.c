#include <stdio.h>
#include <stdlib.h>
/*
un ejercicio que nos saque el numero del medio

*/
int main()
{

    int numeroUno;
    int numeroDos;
    int numeroTres;

    printf("Este Programa Sacara el medio de tres numeros\n");

    printf("Ingrese El Primer numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese El Segundo numero: ");
    scanf("%d", &numeroDos);
    printf("Ingrese El Tercer numero: ");
    scanf("%d", &numeroTres);

    printf("%d, %d, %d", numeroUno, numeroDos, numeroTres);

    return 0;
}
