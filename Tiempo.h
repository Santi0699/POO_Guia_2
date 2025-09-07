#ifndef TIEMPO_H
#define TIEMPO_H

#include <iostream>

class Tiempo
{
private:
    
    int hora,minutos,segundos;

public:


    Tiempo(int h, int m, int s);
    void set_hora(int h);
    void set_minutos(int m);
    void set_segundos(int s);
    void set_datos(int h, int m ,int s);
    int get_hora();
    int get_minutos();
    int get_segundos();
    void ingresar_datos();
    void muestra_fmt_estandard();
    void muestra_fmt_universal();
    bool validadHora();

};





#endif