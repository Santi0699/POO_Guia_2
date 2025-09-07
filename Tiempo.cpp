#include "Tiempo.h"

Tiempo::Tiempo(int h,int m, int s): hora(h), minutos(m), segundos(s)
{
    if(!validadHora()){
        hora=15;
        minutos=24;
        segundos=32;
    }
}

void Tiempo::set_hora(int h)
{
    hora=h;
}

void Tiempo::set_minutos(int m)
{
    minutos=m;
}

bool Tiempo::validadHora()
{
    if(hora>24||hora<0) return false;
    if(minutos>59 || minutos<0 ) return false;
    return segundos<59 && segundos>0;
}

void Tiempo::set_segundos(int s)
{
    segundos=s;
}

void Tiempo::set_datos(int h, int m, int s)
{
    hora=h;
    minutos=m;
    segundos=s;
}

int Tiempo::get_hora()
{
    return hora;
}

int Tiempo::get_minutos()
{
    return minutos;
}

int Tiempo::get_segundos()
{
    return segundos;
}

void Tiempo::ingresar_datos()
{
    std::cout<<"Ingrese Hora: ";
    std::cin>>hora;
    std::cout<<"Ingrese minutos";
    std::cin>>minutos;
    std::cout<<"Ingrese segundos";
    std::cin>>segundos;
}


void Tiempo::muestra_fmt_estandard()
{
    if(hora>12)
    {
        int h_temp=hora;
        hora=h_temp-12;

        std::cout<<hora<<":"<<minutos<<":"<<segundos<<"PM";
    }else 
    {
        std::cout<<hora<<":"<<minutos<<":"<<segundos<<"AM";
    }
}

void Tiempo::muestra_fmt_universal()
{
    std::cout<<hora<<":"<<minutos<<":"<<segundos;
}