#include <gtest/gtest.h>
#include "ruta.h"
#include "monitor.h"
#include "usuario.h"


TEST(Ruta, getsetNombre){
    Ruta r;
    r.setNombre("VillaAlta");
    EXPECT_EQ("VillaAlta", r.getNombre());
}

TEST(Ruta, getsetDescripcion){
    Ruta r;
    r.setDescripcion("Terreno llano");
    EXPECT_EQ("Terreno llano", r.getDescripcion());
}

TEST(Ruta, getsetDificultad){
    Ruta r;
    r.setDificultad("Media");
    EXPECT_EQ("Media", r.getDificultad());
}


TEST(Ruta, getsetEstado){
    Ruta r;
    r.setEstado("Disponible");
    EXPECT_EQ("Disponible", r.getEstado());
}

TEST(Ruta, getsetMonitor){
    Ruta r;
    Monitor m("Pablo","Lopez","Gosalvez",653324569,"pablolopez23@uco.es");
    r.setMonitor(m);
    EXPECT_EQ(m, r.getMonitor());
}

TEST(Ruta, getaddUsuarios){
    Ruta r;
    std::vector<std::string> nombres={"Pablo","Lopez","Guapo"};
    r.addUsuario(Usuario(nombres[0]));
    r.addUsuario(Usuario(nombres[1]));
    r.addUsuario(Usuario(nombres[2]));
    std::list<Usuario> u=r.getUsuarios();
    int count = 0;
    for (auto it = u.begin(); it != u.end(); it++) {
        EXPECT_EQ(nombres[count], it->getNombre());
        count++;
    }
}

TEST(Ruta, getsetCita){
    Ruta r;
    r.setCita("23 de noviembre de 2020");
    EXPECT_EQ("23 de noviembre de 2020", r.getCita());
}


