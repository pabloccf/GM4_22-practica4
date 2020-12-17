#ifndef PARQUE_H
#define PARQUE_H

#include <string>
#include <vector>
#include "ubicacion.h"
#include "ruta.h"

class Ruta{
    private:
        Ubicacion ubicacion_;
        int superficie_;
        int fecha_declaracion_;
        std::vector<Ruta> rutas_;

    public:
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

        int getFecha_declaracion(){
            return fecha_declaracion_;
        }

        void setFecha_declaracion(int fecha_declaracion){
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