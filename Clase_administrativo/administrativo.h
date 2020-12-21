#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H

#include <string>

class Administrativo{
    private:
        std::string usuario_;
        std::string password_;

    public:
        Administrativo(std::string usuario="", std::string password=""){
            usuario_=usuario;
            password_=password;
        }
        std::string getUsuario(){
            return usuario_;
        }

        void setUsuario(std::string usuario){
            usuario_=usuario;
        }

        std::string getPassword(){
            return password_;
        }

        void setPassword(std::string password){
            password_=password;
        }
};

#endif