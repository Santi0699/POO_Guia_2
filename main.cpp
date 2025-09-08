#include "Fecha.h"
#include <iostream>
#include "Tiempo.h"
#include "Empleado.h"

int main()
{
    Fecha f;

    f.ingresarfecha();

    f.imprimir_la();
    f.imprimir_us();
    f.imprimir_letras();

    Tiempo t(15,23,30);
    t.muestra_fmt_estandard();
    t.ingresar_datos();
    t.muestra_fmt_universal();

    Fecha f1(22,6,1999);
    Fecha f2(1,8,2025);
    Empleado em("Santiago","Solari",f2,f1);
    
    em.imprimir_empleado();

    return 0;
}