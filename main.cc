#include <iostream>
#include "general.h"

void menu();

int main(){
    general::iniciarSistema();
    std::string usuario;
    std::cout<<"Introduzca su usuario: ";
    std::cin>>usuario;
    
    std::string password;
    std::cout<<"Introduzca su contraseña: ";
    std::cin>>password;

    if(general::iniciarSesion(usuario, password)){
        menu();
        general::pararSistema();
    }
    
    else{
        std::cout<<"Login incorrecto"<<std::endl;
        return -1;
    }
    return 0;
}

void menu(){
    int opcion;
    do{
        std::cout<<"0: Salir"<<std::endl;
        std::cout<<"1: Mostrar parques"<<std::endl;
        switch (opcion){
            case 0:
                break;
            
            case 1:{
                auto parques=general::getParques();
                for (auto it=parques.begin(); it!=parques.end(); it++){
                    std::cout<<it->getNombre()<<","<<
                                it->getSuperficie()<<std::endl
                    ;

                    for (int i = 0; i < it->getRutas().size(); i++){
                        std::cout<<"  "<<it->getRutas()[i].getNombre()<<","<<
                                        it->getRutas()[i].getDescripcion()<<std::endl
                        ;
                    } 
                }
                

                break;
            }
            default:
                std::cout<<"Error. Opcion no valida"<<std::endl;
                break;
        }
    } while (opcion!=0);  
}