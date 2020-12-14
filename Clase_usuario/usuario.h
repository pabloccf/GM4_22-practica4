#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <list>
#include "usuario.h"

class Usuario{
    private:
        std::string nombre_;
        std::string apellido1_;
        std::string apellido2_;
        std::int dni_;
        std::int numero_;
        std::int fecha_;
        std::string restricciones_;

    public:
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

        std::int getDNI(){
            return dni_;
        }

        void setDNI(std::int dni){
            dni_=dni;
        }

        std::int getNumero(){
            return numero_;
        }

        void setNumero(std::int numero){
            numero_=numero;
        }

        std::int getFecha(){
            return fecha_;
        }

        void setFecha(int fecha){
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