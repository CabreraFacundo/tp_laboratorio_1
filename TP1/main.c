#include <stdio.h>
#include <stdlib.h>
#include "utn.h" ///biblioteca donde guardo las funciones.

///prototipos de las funciones.
char utn_getSi_No();
float utn_factorial(float numero);
float utn_getNumero(void);
float utn_multiplicacion(float numero1, float numero2);
float utn_division(float numero1, float numero2);
float utn_resta(float numero1, float numero2);
float utn_suma(float numero1, float numero2);

int main()
{
    ///declaro las variables.
    float numero1;
    float numero2;
    float resultado;
    float resultado2;
    char opcion;
    char respuesta;

    ///declaro en cero porque todavia no se ingreso ningun numero.
    numero1=0;
    numero2=0;

    do
    {
        ///Muestro el menu de opciones.
        system("cls");
        fflush(stdin); ///programe en Windows por eso uso "fflush()"
        printf("\nNumero A: %.2f \nNumero B: %.2f",numero1,numero2);
        printf("\n_______________________________________\n");
        printf("\n          MENU \n\n");
        printf("a) Ingresar numeros\n");
        printf("b) Calcular la suma (A+B)\n");
        printf("c) Calcular la resta (A-B)\n");
        printf("d) Calcular la division (A/B)\n");
        printf("e) Calcular el multiplicacion (A*B)\n");
        printf("f) Calcular el factorial (A!)(B!)\n");
        printf("g) Salir.\n");

        ///Pido la opcion
        fflush(stdin);  ///limpio memoria
        printf("\nElija una opcion (minuscula): ");
        scanf("%c",&opcion); ///guardo opcion
        ///valido opcion
        while(opcion!='a'&&opcion!='b'&&opcion!='c'&&opcion!='d'&&opcion!='e'&&opcion!='f'&&opcion!='g')
        {
            fflush(stdin);
            printf("\nERROR.Elija una opcion (minuscula): ");
            scanf("%c",&opcion);
        }
        ///menu de opciones.
        switch(opcion)
        {
            case 'a':
              /**primer opcion,pido los numeros que quiere ingresar para operar*/
                printf("Numero 'A': \n");
                numero1=utn_getNumero();
                printf("Numero 'B': \n");
                numero2=utn_getNumero();
                respuesta='s';
                break;
            case 'b':
                ///La segunda opcion es suma. Muestro suma y pregunto si desea continuar.
                resultado=utn_suma(numero1,numero2);
                printf("\n_______________________________________\n");
                printf("\nEl resultado de A+B es: %.2f\n",resultado);
                printf("\n_______________________________________\n");
                printf("\nVolver al menu?");
                respuesta=utn_getSi_No();
                break;
            case 'c':
               ///tercer opcion es resta. Muestro el resultado, vuelvo a preguntar si desea continuar.
                resultado=utn_resta(numero1,numero2);
                printf("\n_______________________________________\n");
                printf("\nEl resultado de A-B es: %.2f\n",resultado);
                printf("\n_______________________________________\n");
                printf("\nVolver al menu?");
                respuesta=utn_getSi_No();
                break;
            case 'd':
                ///cuarta opcion division. Muestro resultado, pido respuesta.
                resultado=utn_division(numero1,numero2);
                printf("\n_______________________________________\n");
                printf("\nEl resultado de A/B es: %.2f\n",resultado);
                printf("\n_______________________________________\n");
                printf("\nVolver al menu?");
                respuesta=utn_getSi_No();
                break;
            case 'e':
                ///quinta opcion multiplicacion. Muestro resultado, pido y valido respuesta
                resultado=utn_multiplicacion(numero1,numero2);
                printf("\n_______________________________________\n");
                printf("\nEl resultado de A*B es: %.2f\n",resultado);
                printf("\n_______________________________________\n");
                printf("\nVolver al menu?");
                respuesta=utn_getSi_No();
                break;
            case 'f':
                ///sexta opcion factorial. Muestro resultado, pido y valido respuesta.
                resultado=utn_factorial(numero1);
                resultado2=utn_factorial(numero2);
                printf("\n_______________________________________\n");
                printf("\nEl factorial de A es: %.2f\nEl factorial de B es: %.2f\n",resultado,resultado2);
                printf("\n_______________________________________\n");
                printf("\nVolver al menu?");
                respuesta=utn_getSi_No();
                break;
            case 'g':
                ///septima opcion, salir.
                return 0;
        }
    }while(respuesta=='s'); ///mientras la respuesta sea 's', sigue el menu para seguir operando
    return 0;
}
