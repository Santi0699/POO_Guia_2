#include "Fecha.h"
#include <iostream>
#include "Tiempo.h"

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
    return 0;
}