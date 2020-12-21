#ifndef MONITOR_H
#define MONITOR_H
#include <string>
#include <iostream>

using std::string;

class Monitor{
    private:
    //Definimos las variables principales de la clase monitor.

        string nombre_;             //Nombre del monitor.
        string apellido1_;          //Primer apellido del monitor.
        string apellido2_;          //Segundo apellido del monitor.
        int numero_;                //Numero de telefono del monitor.
        string email_;              //Correo electronico del monitor.
    public:
    //Definimos el constructor con una copia de nuestras variables principales que usaremos de variables auxiliares. 

        Monitor(string nombre="\0", string apellido1="\0", string apellido2="\0", int numero=0, string email="\0"){
            nombre_=nombre;
            apellido1_=apellido1;
            apellido2_=apellido2;
            numero_=numero;
            email_=email;
        }

    /*
    Definimos y rellenamos las funciones creadas para modificar datos, estas empiezan por "set".
    En todas deberemos asignar los datos que haya en las variables auxiliares a nuestras variables principales.
    */
        inline void setNombre(string nombre){nombre_=nombre;}
        inline void setApellido1(string apellido1){apellido1_=apellido1;}
        inline void setApellido2(string apellido2){apellido2_=apellido2;}
        inline void setNumero(int numero){
            if(numero<0){
                return;
            }
            
            numero_=numero;
        }     //La funcion "set" del numero de telefono cambia puesto que nos queremos asegurar de que tiene 9 digitos.
        inline void setEmail(string email){email_=email;}

    //En las funciones denominadas como "get" se devolveran los datos del monitor de lsa variables principales.

        inline string getNombre()const{return nombre_;}
        inline string getApellido1()const{return apellido1_;}
        inline string getApellido2()const{return apellido2_;}
        inline int getNumero()const{return numero_;}
        inline string getEmail()const{return email_;}
        
};

#endif
