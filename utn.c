#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int utn_suma(int numero1, int numero2)
{
    int resultado;
    resultado=numero1+numero2;
    return resultado;
}

int utn_resta(int numero1, int numero2)
{
    int resultado;
    resultado=numero1-numero2;
    return resultado;
}

int utn_division(int numero1, int numero2)
{
    int retorno;
    int resultado;
    if(numero1==0 || numero2==0)
    {
        printf("\n_______________________________________\n");
        printf("\nNo se puede dividir por cero.");
        retorno=0;
    }
    else
    {
       resultado=numero1/numero2;
       retorno=resultado;
    }
    return retorno;
}

int utn_multiplicacion(int numero1, int numero2)
{
    int resultado;
    resultado=numero1*numero2;
    return resultado;
}


int utn_getNumero(void)
{
    int aux;
    int numero;

        system("cls");
        printf("Ingrese un numero: ");
        aux=(scanf("%d",&numero));
        fflush(stdin);
    while(aux!=1)
    {
        system("cls");
        printf("ERROR.Ingrese un numero: ");
        aux=(scanf("%d",&numero));
        fflush(stdin);
    }
    return numero;
}


int utn_factorial(int numero)
{
    int respuesta;
    if(numero==1)
    {
        return 1;
    }
    if(numero<=0)
    {
        printf("\n_______________________________________\n");
        printf("\nNo se puede factoriar cero o menor a cero.");
        return 0;
    }
    else
    {
        respuesta=numero*utn_factorial(numero-1);
        return respuesta;
    }
}

char utn_getSi_No(void)
{
    char respuesta;

        fflush(stdin);
        printf("\nIngrese s o n (minuscula): ");
        scanf("%c",&respuesta);
    while(respuesta!='n' && respuesta!='s')
    {
        fflush(stdin);
        printf("\nERROR.Ingrese s o n (minuscula): ");
        scanf("%c",&respuesta);
    }
    return respuesta;
}
