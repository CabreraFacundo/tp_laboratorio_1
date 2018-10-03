#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "utn.h"
#include "arrayEmployees.h"

static int generarId(void);



static int generarId(void)
{
    static int id = 0;
    id++;
    return id;
}

void init_isEmpty(Employees* pEmployees, int limite)
{
    int i=0;

    if(pEmployees!= NULL && i<limite)
    {
        for(i=0; i<limite; i++)
        {
            pEmployees[i].isEmpty = 1;
        }
    }
}

int getEspacioVacio(Employees* pEmployees , int limite)
{
    int i;
    int index;

    for(i=0;i<limite;i++)
    {
        if(pEmployees[i].isEmpty==1)
        {
            index = i;
        }
    }

    return index;
}


void addEmployees(Employees* pEmployees, int limite)
{
    int index;

    index = getEspacioVacio(pEmployees,limite);

    pEmployees[index].id = generarId();

    fflush(stdin);
    utn_getString("Ingrese el nombre(maximo 50 letras): ",pEmployees[index].nombre,50);

    fflush(stdin);
    utn_getString("Ingrese el apellido(maximo 50 letras): ",pEmployees[index].apellido,50);

    pEmployees[index].salario = utn_getFloat("Ingrese el salario: ");

    pEmployees[index].sector = utn_getInt("Ingrese el sector: ");

    pEmployees[index].isEmpty = 0;

}

void findEmployeeById(Employees* pEmployees,int limite)
{
    int i;
    int id;

    id = utn_getInt("Ingrese el ID que desea buscar: ");

    for(i=0;i<limite;i++)
    {
        if(pEmployees[i].id == id)
        {
            listarCampos(pEmployees,id);
        }
    }
}


void listarCampos(Employees* pEmployees, int id)
{
    printf("\nNombre: %s",pEmployees[id].nombre);
    printf("\nApellido: %s", pEmployees[id].apellido);
    printf("\nSalario: %f", pEmployees[id].salario);
    printf("\nSector: %d", pEmployees[id].sector);
}


void removeEmployees(Employees* pEmployees, int limite)
{
    int i;
    int id;

    id = utn_getInt("Ingrese el ID del empleado que desea eliminar: ");

    for(i=0;i<limite;i++)
    {
        if(pEmployees[i].id==id)
        {
            pEmployees[i].isEmpty = 1;
        }
    }
}


void listarEmpleados(Employees* pEmployees, int limite)
{
    int i;

    for(i=0;i<limite;i++)
    {
        if(pEmployees[i].isEmpty == 0)
            listarCampos(pEmployees,i);
    }
}


void modificarEmpleado(Employees* pEmployees, int limite)
{
    int id;
    int opcion;
    int i;

    id = utn_getInt("Ingrese el ID que desea modificar: ");
    for(i=0;i<limite;i++)
    {
        if(pEmployees[i].id == id)
        {
            printf("\nNombre: %s",pEmployees[i].nombre);
            printf("\nApellido: %s", pEmployees[i].apellido);
            printf("\nSalario: %f", pEmployees[i].salario);
            printf("\nSector: %d", pEmployees[i].sector);

            printf("\nQue dato desea modificar?");
            printf("\n1)Nombre");
            printf("\n2)Apellido");
            printf("\n3)Salario");
            printf("\n4)Sector");

            opcion = utn_getInt("\nSeleccione una opcion: ");
            if(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4)
                opcion = utn_getInt("Error. Seleccione una opcion valida: ");

            switch(opcion)
            {
                case 1:
                    utn_getString("\nIngrese el nombre: ", pEmployees[id].nombre,50);
                    break;
                case 2:
                    utn_getString("\nIngrese el apellido: ",pEmployees[id].apellido,50);
                    break;
                case 3:
                    pEmployees[id].salario = utn_getFloat("Ingrese el salario: ");
                    break;
                case 4:
                    pEmployees[id].sector = utn_getInt("Ingrese el sector: ");
                    break;
            }
        }
    }

}

void sortEmpleados(Employees* pEmpleados, int limite)
{
    int opcion;
    int i;
    int j;
    char temp[51];

    printf("\n1)Ordenar de manera ascendente");
    printf("\n2)Ordenar de manera descendente");

    opcion = utn_getInt("\nIngrese la opcion: ");

    switch(opcion)
    {
        case 1:
            for(i=1;i<limite;i++)
            {
                strcpy(temp,pEmpleados[i].apellido);
                j=i-1;
                while(strcmp(temp,pEmpleados[j].apellido)>0 && j>=0)
                {
                    printf("%s",pEmpleados[j].apellido);
                    j--;
                }
            }
            break;
        case 2:
            for(i=1;i<limite;i++)
            {
                strcpy(temp,pEmpleados[i].apellido);
                j=i-1;
                while(strcmp(temp,pEmpleados[j].apellido)<0 && j>=0)
                {
                    printf("%s",pEmpleados[j].apellido);
                    j--;
                }
            }

    }


}


