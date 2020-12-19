#ifndef PARQUE_H
#define PARQUE_H

#include <string>
#include <vector>
#include <fstream>
#include <list>

#include "date.h"
#include "ubicacion.h"
#include "ruta.h"

class Parque{
    private:
        std::string nombre_;
        Ubicacion ubicacion_;
        int superficie_;
        date fecha_declaracion_;
        std::vector<Ruta> rutas_;

    public:
        std::string getNombre(){
            return nombre_;
        }
    
        void setNombre(std::string nombre){
            nombre_=nombre;
        }
        
        Ubicacion getUbicacion(){
            return ubicacion_;
        }

        void setUbicacion(Ubicacion ubicacion){
            ubicacion_=ubicacion;
        }

        int getSuperficie(){
            return superficie_;
        }

        void setSuperficie(int superficie){
            superficie_=superficie;
        }

        date getFecha_declaracion(){
            return fecha_declaracion_;
        }

        void setFecha_declaracion(date fecha_declaracion){
            fecha_declaracion_=fecha_declaracion;
        }

        std::vector<Ruta> getRutas(){
            return rutas_;
        }

        void setRutas(Ruta ruta){
            rutas_.push_back(ruta);
        }
};

#endif