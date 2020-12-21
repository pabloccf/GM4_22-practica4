#ifndef GENERAL_H
#define GENERAL_H

#include <list>
#include <string>
#include <vector>

#include "parque.h"
#include "ruta.h"
#include "administrativo.h"
#include "monitor.h"
#include "usuario.h"

namespace general{

    std::list<Parque> getParques();
    std::vector<Administrativo> getAdministrativos();
    void iniciarSistema();
    void pararSistema();
    bool iniciarSesion(std::string usuario, std::string password);
}




#endif
