#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED
#include "utn.h"

char utn_getSi_No(void);
    /**
        Esta funcion sirve para validar la respuesta de Si o No.
        No recibe nada.
        Imprimo un mensaje pidiendole que al usuario que ingrese 's' o 'n',
        y lo guardo en la variable de tipo char "respuesta".
        Despues valido, en caso de ser correcto retorno "respuesta".
    */
float utn_factorial(float numero);
    /**
        Esta funcion me calcula el factorial.
        Recibe un numero flotante se guarda en la variable "numero".
        Dentro de la funcion se declara la variable "resultado" de tipo float.
        Si numero es igual a 1 entonces se termina la operacion.
        Valido si numero es igual o menor a cero e imprimo mensaje de error.
        Para factoriar se vuelve a llamar a la funcion, hasta que el numero sea 1.
        Retorna el valor de la variable "resultado".
    */
float utn_getNumero(void);
    /**
        Esta funcion pide y valida un numero.
        No recibe nada.
        Primero imprime un mensaje pidiendo el numero y se guarda en la variable "numero" de tipo float.
        Luego valido y limpio la memoria.
        Si valida correctamente devuelve la variable "numero".
    */
float utn_multiplicacion(float numero1, float numero2);
    /**
        Esta funcion realiza la multiplicacion.
        Primero recibe los valores de numero A y numero B.
        Se declara la variable de tipo float "resultado".
        Se hace la multiplicacion y se retorna "resultado."
    */
float utn_division(float numero1, float numero2);
    /**
        Esta funcion realiza la division.
        Recibe los valores de numero A y numero B.
        Se declaran 2 variables de tipo float: "retorno" y "resultado".
        Se valida si el divisor es 0. Si es 0 entonces imprime mensaje de error y termina la funcion.
        Si no continua con la division y retorna el resultado.
    */
float utn_resta(float numero1, float numero2);
    /**
        Esta funcion realiza la resta.
        Recibe los valores de numero A y numero B.
        Se declara la variable de tipo float "resultado".
        Retorna "resultado".
    */
float utn_suma(float numero1, float numero2);
    /**
        Esta funcion realiza la suma.
        Recibe los valores de numero A y numero B.
        Se declara la variable de tipo float "resultado".
        Retorna "resultado".
    */
#endif // UTN_H_INCLUDED
