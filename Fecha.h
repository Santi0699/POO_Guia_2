#ifndef FECHA_H
#define FECHA_H

#include <ctime>

class Fecha
{
private:
    int day;
    int month;
    int year;

public:
    Fecha();
    Fecha(int d, int m, int y);
    // setters
    //void setFecha(int d, int m, int y);
    void setday(int da);
    void setmonth(int mon);
    void setyear(int ye);
    // E/S
    void ingresarfecha();
    void imprimir_la();
    void imprimir_us();
    void imprimir_letras();
    const char *mesLetras();
    bool validarFecha();
    int diasEnMes(int m);
};

#endif