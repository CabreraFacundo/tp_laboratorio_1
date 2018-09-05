#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


float utn_suma(float numero1, float numero2)
{
    float resultado;
    resultado=numero1+numero2;
    return resultado;
}

float utn_resta(float numero1, float numero2)
{
    float resultado;
    resultado=numero1-numero2;
    return resultado;
}

float utn_division(float numero1, float numero2)
{
    float retorno;
    float resultado;
    if(numero2==0)
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

float utn_multiplicacion(float numero1, float numero2)
{
    float resultado;
    resultado=numero1*numero2;
    return resultado;
}


float utn_getNumero(void)
{
    float aux;
    float numero;

    printf("Ingrese un numero: ");
    aux=(scanf("%f",&numero));
    fflush(stdin);
    while(aux!=1)
    {
        printf("ERROR.Ingrese un numero: ");
        aux=(scanf("%f",&numero));
        fflush(stdin);
    }
    return numero;
}


float utn_factorial(float numero)
{
    float respuesta;
    if(numero==1)
    {
        return 1;
    }
    if(numero<=0)
    {
        printf("\n_______________________________________\n");
        printf("\nNo se puede operar con cero, menor a cero o decimal.");
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
        printf("ERROR.Ingrese s o n (minuscula): ");
        scanf("%c",&respuesta);
    }
    return respuesta;
}
