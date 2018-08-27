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

    int numeroMayor;
    int numeroDelMedio;
    int numeroMenor;

    printf("Este Programa Sacara el medio de tres numeros\n");

    printf("Ingrese El Primer numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese El Segundo numero: ");
    scanf("%d", &numeroDos);
    printf("Ingrese El Tercer numero: ");
    scanf("%d", &numeroTres);

    numeroMayor = numeroUno;
    numeroMenor = numeroUno;

    if(numeroMayor < numeroDos)
    {
        numeroMayor = numeroDos;
    }
    if(numeroMenor > numeroDos)
    {
        numeroMenor = numeroDos;
    }


    if(numeroMayor < numeroTres)
    {
        numeroMayor = numeroTres;
    }
    if(numeroMenor > numeroTres)
    {
        numeroMenor = numeroTres;
    }


    printf("%d, %d, %d\n", numeroUno, numeroDos, numeroTres);
    printf("%d, %d", numeroMayor, numeroMenor);
    return 0;
}
