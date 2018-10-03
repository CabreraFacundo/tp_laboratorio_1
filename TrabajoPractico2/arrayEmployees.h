#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED

typedef struct
{
    int id;
    char nombre[51];
    char apellido[51];
    float salario;
    int sector;
    int isEmpty;

}Employees;


void init_isEmpty(Employees* pEmployees, int limite);
int getEspacioVacio(Employees* pEmployees , int limite);
void addEmployees(Employees* pEmployees, int limite);
void listarCampos(Employees* pEmployees, int id);
void findEmployeeById(Employees* pEmployees,int limite);
void removeEmployees(Employees* pEmployees, int limite);
void listarEmpleados(Employees* pEmployees, int limite);
void modificarEmpleado(Employees* pEmployees, int limite);
void sortEmpleados(Employees* pEmpleados, int limite);

#endif // ARRAYEMPLOYEES_H_INCLUDED
