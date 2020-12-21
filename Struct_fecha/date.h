#ifndef DATE_H
#define DATE_H

#include <iostream>

struct date{
    int dia;
    int mes;
    int year;

    bool operator==(const date f)const{
        return (dia==f.dia && mes==f.mes && year==f.year);
    }

    friend std::ostream& operator<<(std::ostream& os, const date &f){
        os<<f.dia<<","<<f.mes<<","<<f.year;
        return os;
    }
};

#endif