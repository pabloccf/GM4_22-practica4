#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <list>

#include "date.h"

class Usuario{
    private:
        std::string nombre_;
        std::string apellido1_;
        std::string apellido2_;
        int dni_;
        int numero_;
        date fecha_;
        std::string restricciones_;

    public:
        Usuario(std::string nombre="", std::string apellido1="", std::string apellido2="", int dni=0, int numero=0, date fecha={0,0,0}, std::string restricciones=""){
            nombre_=nombre;
            apellido1_=apellido1;
            apellido2_=apellido2;
            dni_=dni;
            numero_=numero;
            fecha_=fecha;
            restricciones_=restricciones;
        }

        std::string getNombre(){
            return nombre_;
        }

        void setNombre(std::string nombre){
            nombre_=nombre;
        }

        std::string getApellido1(){
            return apellido1_;
        }

        void setApellido1(std::string apellido1){
            apellido1_=apellido1;
        }

        std::string getApellido2(){
            return apellido2_;
        }

        void setApellido2(std::string apellido2){
            apellido2_=apellido2;
        }

        int getDNI(){
            return dni_;
        }

        void setDNI(int dni){
            if(dni>99999999 || dni<0){
                return;
            }

            dni_=dni;
        }

        int getNumero(){
            return numero_;
        }

        void setNumero(int numero){
            if(numero<0){
                return;
            }

            numero_=numero;
        }

        date getFecha(){
            return fecha_;
        }

        void setFecha(date fecha){
            fecha_=fecha;
        }

        std::string getRestricciones(){
            return restricciones_;
        }

        void setRestricciones(std::string restricciones){
            restricciones_=restricciones;
        }
};

#endif