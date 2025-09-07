#include "Fecha.h"
#include <iostream>


Fecha::Fecha() : day(1), month(1), year(1971) {}
Fecha::Fecha(int d, int m, int y) : day(d), month(m), year(y)
{
    if (!validarFecha())
    {
        day = 1;
        month = 1;
        year = 1971;
    }
}

int Fecha::diasEnMes(int m)
{
    static const int dm[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return dm[m];
}
void Fecha::setday(int da)
{
    day = da;
}

void Fecha::setmonth(int mon)
{
    month = mon;
}

void Fecha::setyear(int ye)
{
    year = ye;
}

bool Fecha::validarFecha()
{
    if (year <= 0)
        return false;
    if (month <= 0 || month > 12)
        return false;
    int maxdias=diasEnMes(month);
    return day>=1 && day<=maxdias; 
}

void Fecha::ingresarfecha()
{
    int d,m,y;
    while (true)
    {
        std::cout<<"Dia: ";
        std::cin>>d;
        std::cout<<"Mes: ";
        std::cin>>m;
        std::cout<<"Anio: ";
        std::cin>>y;

        setday(d);
        setmonth(m);
        setyear(y);

        if(validarFecha())break;
    }
    
}

void Fecha::imprimir_la()
{
    std::cout<<day<<"/"<<month<<"/"<<year;
}

void Fecha::imprimir_us()
{
    std::cout<<month<<"/"<<day<<"/"<<year;
}

const char* Fecha::mesLetras() 
{
    static const char* meses[]={"","Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    
    return meses[month];
}

void Fecha::imprimir_letras()
{
    const char* mes=mesLetras();
    std::cout<<day<<"de"<<mes<<"del"<<year;
}