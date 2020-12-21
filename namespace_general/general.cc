#include <list>
#include <vector>
#include <fstream>
#include <iostream>

#include "general.h"
#include "parque.h"
#include "administrativo.h"

namespace general{
    namespace {
        std::list<Parque> parques;
        std::list<std::string> citas;
        std::vector<Administrativo> administrativos;

        void leeParques(){
            parques.clear();
            std::fstream f, frutas;
            f.open("parques.txt",std::ios::in);
            frutas.open("rutas.txt", std::ios::in);

            std::string nombre, superficie, dia, mes, year, rutas_size;
            Ubicacion ubi;
            date fecha;
            
            while(std::getline(f, nombre,',')){
                std::getline(f, ubi.localizacion,',');
                std::getline(f, ubi.municipio,',');
                std::getline(f, ubi.provincia,',');
                std::getline(f, superficie,',');
                std::getline(f, dia,',');
                std::getline(f, mes,',');
                std::getline(f, year,',');
                std::getline(f, rutas_size,'\n');

                fecha.dia=std::stoi(dia);
                fecha.mes=std::stoi(mes);
                fecha.year=std::stoi(year);
        
                Parque aux(nombre, ubi, std::stoi(superficie), fecha);

                int rutasSize=std::stoi(rutas_size);

                std::vector<Ruta> rutas;

                for (int i = 0; i < rutasSize; i++){
                    std::string nombre_ruta, descripcion;
                    std::getline(frutas, nombre_ruta, ',');
                    std::getline(frutas, descripcion, '\n');
                    rutas.push_back(Ruta(nombre_ruta, descripcion));
                }
                
                aux.setRutas(rutas);

                parques.push_back(aux);
            }
            f.close();
            frutas.close();
        }

        void escribeParques(){
            std::fstream f;
            std::fstream frutas;
            frutas.open("rutas.txt", std::ios::out);
            f.open("parques.txt", std::ios::out);

            for(auto it=parques.begin();it!=parques.end();it++){
                f<<it->getNombre()<<","<<
                    it->getUbicacion().localizacion<<","<<
                    it->getUbicacion().municipio<<","<<
                    it->getUbicacion().provincia<<","<<
                    it->getSuperficie()<<","<<
                    it->getFecha_declaracion()<<","<<
                    it->getRutas().size()<<std::endl
                ;

                std::vector<Ruta> rutas=it->getRutas();
                for (int i = 0; i < rutas.size(); i++){
                    frutas<<rutas[i].getNombre()<<","<<
                            rutas[i].getDescripcion()<<std::endl
                    ;
                }
            }
            f.close();
        }

        void leeAdministrativos(){
            administrativos.clear();
            std::fstream f;
            f.open("administrativos.txt",std::ios::in);

            std::string usuario, password;
            
            while(std::getline(f, usuario,',')){
                std::getline(f, password,'\n');
        
                Administrativo aux(usuario, password);
        
                administrativos.push_back(aux);
            }
            f.close();
        }

        void escribeAdministrativos(){
            std::fstream f;
            f.open("administrativos.txt", std::ios::out);

            for(auto it=administrativos.begin();it!=administrativos.end();it++){
                f<<it->getUsuario()<<","<<
                    it->getPassword()<<std::endl
                ;
            }
            f.close();
        }
    }

    std::list<Parque> getParques(){
        return parques;
    }

    std::vector<Administrativo> getAdministrativos(){
        return administrativos;
    }
    
    void iniciarSistema(){
        leeParques();
        leeAdministrativos();
    }

    void pararSistema(){
        escribeParques();
        escribeAdministrativos();
    }

    bool iniciarSesion(std::string usuario, std::string password){
        for (int i = 0; i < administrativos.size(); i++){
            if(administrativos[i].getUsuario()==usuario && administrativos[i].getPassword()==password){
                return true;
            }
        }
        return false;
    }
}