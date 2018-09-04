#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

char utn_getSi_No();
int utn_factorial(int numero);
int utn_getNumero(void);
int utn_multiplicacion(int numero1, int numero2);
int utn_division(int numero1, int numero2);
int utn_resta(int numero1, int numero2);
int utn_suma(int numero1, int numero2);

int main()
{
    int numero1;
    int numero2;
    int resultado;
    int resultado2;
    char opcion;
    char respuesta;

    numero1=utn_getNumero();
    numero2=utn_getNumero();
    do
    {
        system("cls");
        fflush(stdin);
        printf("\nNumero A: %d \nNumero B: %d",numero1,numero2);
        printf("\n_______________________________________\n");
        printf("\n          MENU \n\n");
        printf("a) Calcular la suma (A+B)\n");
        printf("b) Calcular la resta (A-B)\n");
        printf("c) Calcular la division (A/B)\n");
        printf("d) Calcular la multiplicacion (A*B)\n");
        printf("e) Calcular el factorial (A!)(B!)\n");
        printf("f) Salir.\n");

        fflush(stdin);
        printf("\nElija una opcion (minuscula): ");
        scanf("%c",&opcion);
        while(opcion!='a'&&opcion!='b'&&opcion!='c'&&opcion!='d'&&opcion!='e'&&opcion!='f')
        {
            fflush(stdin);
            printf("\nERROR.Elija una opcion (minuscula): ");
            scanf("%c",&opcion);
        }

        switch(opcion)
        {
            case 'a':
                resultado=utn_suma(numero1,numero2);
                printf("\n_______________________________________\n");
                printf("\nEl resultado de A+B es: %d\n",resultado);
                printf("\n_______________________________________\n");
                printf("\nVolver al menu?");
                respuesta=utn_getSi_No();
                break;
            case 'b':
                resultado=utn_resta(numero1,numero2);
                printf("\n_______________________________________\n");
                printf("\nEl resultado de A-B es: %d\n",resultado);
                printf("\n_______________________________________\n");
                printf("\nVolver al menu?");
                respuesta=utn_getSi_No();
                break;
            case 'c':
                resultado=utn_division(numero1,numero2);
                printf("\n_______________________________________\n");
                printf("\nEl resultado de A/B es: %d\n",resultado);
                printf("\n_______________________________________\n");
                printf("\nVolver al menu?");
                respuesta=utn_getSi_No();
                break;
            case 'd':
                resultado=utn_multiplicacion(numero1,numero2);
                printf("\n_______________________________________\n");
                printf("\nEl resultado de A*B es: %d\n",resultado);
                printf("\n_______________________________________\n");
                printf("\nVolver al menu?");
                respuesta=utn_getSi_No();
                break;
            case 'e':
                resultado=utn_factorial(numero1);
                resultado2=utn_factorial(numero2);
                printf("\n_______________________________________\n");
                printf("\nEl factorial de A es: %d\nEl factorial de B es: %d\n",resultado,resultado2);
                printf("\n_______________________________________\n");
                printf("\nVolver al menu?");
                respuesta=utn_getSi_No();
                break;
            case 'f':
                return 0;
        }
    }while(respuesta=='s');
    return 0;
}
