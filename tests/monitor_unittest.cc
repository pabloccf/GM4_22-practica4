#include <gtest/gtest.h>
#include "monitor.h"


TEST(Monitor, getsetNombre){
    Monitor m;
    m.setNombre("Pablo");
    EXPECT_EQ("Pablo", m.getNombre());
}

TEST(Monitor, getsetApellidos){
    Monitor m;
    m.setApellido1("Garcia");
    m.setApellido2("Jimenez");
    EXPECT_EQ("Garcia", m.getApellido1());
    EXPECT_EQ("Jimenez", m.getApellido2());
}


TEST(Monitor, getsetNumero){
    Monitor m;
    m.setNumero(-10);
    EXPECT_EQ(0, m.getNumero());
    m.setNumero(58);
    EXPECT_EQ(58, m.getNumero());
}

TEST(Monitor, getsetEmail){
    Monitor m;
    m.setEmail("i92ibfep@uco.es");
    EXPECT_EQ("i92ibfep@uco.es", m.getEmail());
}
