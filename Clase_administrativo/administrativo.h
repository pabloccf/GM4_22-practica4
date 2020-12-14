#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H

#include <string>

class Administrativo{
    private:
        std::string usuario_;
        std::string contraseña_;

    public:
        std::string getUsuario(){
            return usuario_;
        }

        void setUsuario(std::string usuario){
            usuario_=usuario;
        }

        std::string getContraseña(){
            return contraseña_;
        }

        void setContraseña(std::string contraseña){
            contraseña_=contraseña;
        }
};

#endif