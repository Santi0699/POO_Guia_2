#include "Empleado.h"
#include <cstring>

Empleado::Empleado(const char n[], const char a[], Fecha fi, Fecha fn): fechaIngreso(fi),fechaNacimiento(fn)
{
    strcpy(nombre,n);
    strcpy(apellido,a);
}

void Empleado::imprimir_empleado()
{
    std::cout<<"Empleado: "<<apellido<<", "<<nombre;
    std::cout<<"\nFecha de ingreso: ";
    fechaIngreso.imprimir_letras();
    std::cout<<"\nFecha de nacimiento: ";
    fechaNacimiento.imprimir_letras();
    
}