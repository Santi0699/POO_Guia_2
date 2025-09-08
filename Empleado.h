#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Fecha.h"
#include <iostream>

class Empleado{
private:
char nombre[25];
char apellido[25];
Fecha fechaIngreso;
Fecha fechaNacimiento;

public:
Empleado(const char n[],const char a[], Fecha fi, Fecha fn);
void imprimir_empleado();

};


#endif 