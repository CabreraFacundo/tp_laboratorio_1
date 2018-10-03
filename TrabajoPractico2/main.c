#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "utn.h"
#include "arrayEmployees.h"
#define LIMITE_EMPLEADOS 2

int main()
{
    Employees empleado[LIMITE_EMPLEADOS];
    int opcion;
    int opcion2;
    char respuesta='s';

    init_isEmpty(empleado,LIMITE_EMPLEADOS);
    do
    {
        system("cls");
        printf("--------------------------------------");
        printf("\n-----------------MENU-----------------");
        printf("\n--------------------------------------");
        printf("\nSELECCIONE UNA OPCION: ");
        printf("\n1)Dar de alta un empleado");
        printf("\n2)Modificar datos de un empleado");
        printf("\n3)Dar de baja un empleado");
        printf("\n4)Informar datos");


        opcion = utn_getInt("\nIngrese la opcion: ");
        if(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4)
            {
                opcion = utn_getInt("Error. Ingrese una opcion valida: ");
            }

        switch(opcion)
        {
            case 1:

                addEmployees(empleado,LIMITE_EMPLEADOS);
                do{
                    fflush(stdin);
                    printf("\nDesea volver al menu?(s o n)");
                    scanf("%c",&respuesta);
                }while(respuesta!='s' && respuesta!='n');
                break;
            case 2:
                modificarEmpleado(empleado,LIMITE_EMPLEADOS);
                 do{
                    fflush(stdin);
                    printf("\nDesea volver al menu?(s o n)");
                    scanf("%c",&respuesta);
                }while(respuesta!='s'&& respuesta!='n');
                break;
            case 3:
                removeEmployees(empleado,LIMITE_EMPLEADOS);
                 do{
                    fflush(stdin);
                    printf("\nDesea volver al menu?(s o n)");
                    scanf("%c",&respuesta);
                }while(respuesta!='s'&& respuesta!='n');
                break;
            case 4:
               /* printf("\nINFORMAR: ");
                printf("\n1)Listado empleados");
                printf("\n2)Promedio salarios");

                opcion2 = utn_getInt("\nIngrese la opcion: ");
                if(opcion!=1 && opcion!=2)
                    {
                        opcion = utn_getInt("Error. Ingrese una opcion valida: ");
                    }

                switch(opcion2)
                {
                    case 1:


                }*/
                sortEmpleados(empleado,LIMITE_EMPLEADOS);

                do{
                    fflush(stdin);
                    printf("\nDesea volver al menu?(s o n)");
                    scanf("%c",&respuesta);
                }while(respuesta!='s'&& respuesta!='n');
                break;
        }
    }while(respuesta=='s');


    return 0;
}
