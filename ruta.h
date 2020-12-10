#ifndef RUTA_H
#define RUTA_H

#include <string>
#include <list>
#include "usuario.h"
#include "monitor.h"

class Ruta{
    private:
        std::string nombre_;
        std::string descripcion_;
        std::string dificultad_;
        std::string estado_;
        Monitor monitor_;
        std::list<Usuario> usuarios_;
        std::string cita_;
    public:
        std::string getNombre(){
            return nombre_;
        }

        void setNombre(std::string nombre){
            nombre_=nombre;
        }

        std::string getDescripcion(){
            return descripcion_;
        }

        void setDescripcion(std::string descripcion){
            descripcion_=descripcion;
        }

        std::string getDificultad(){
            return descripcion_;
        }

        void setDificultad(std::string dificultad){
            dificultad_=dificultad;
        }

        std::string getEstado(){
            return estado_;
        }

        void setEstado(std::string estado){
            estado_=estado;
        }

        Monitor getMonitor(){
            return monitor_;
        }

        void setMonitor(Monitor monitor){
            monitor_=monitor;
        }

        std::list<Usuario> getUsuarios(){
            return usuarios_;
        }

        void addUsuarios(Usuario usuario){
            usuarios_=usuario;
        }

        std::string getCita(){
            return cita_;
        }

        void setCita(std::string cita){
            cita_=cita;
        }
};

#endif
