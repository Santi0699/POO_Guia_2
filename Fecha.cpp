#include "Fecha.h"

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

int Fecha::diasEnMes(int m, int y)
{
    static const int dm[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

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
    if (day <= 0);
}