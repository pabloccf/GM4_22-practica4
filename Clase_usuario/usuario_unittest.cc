#include "usuario.h"
#include "date.h"
#include <gtest/gtest.h>

TEST(Usuario, getsetNombre){
    Usuario u;
    u.setNombre("Pablo");
    EXPECT_EQ("Pablo", u.getNombre());
}

TEST(Usuario, getsetApellidos){
    Usuario u;
    u.setApellido1("Lopez");
    u.setApellido2("Jimenez");
    EXPECT_EQ("Lopez", u.getApellido1());
    EXPECT_EQ("Jimenez", u.getApellido2());
}

TEST(Usuario, getsetDNI){
    Usuario u;
    u.setDNI(-10);
    EXPECT_EQ(0, u.getDNI());
    u.setDNI(100000000);
    EXPECT_EQ(0, u.getDNI());
    u.setDNI(46557204);
    EXPECT_EQ(46557204, u.getDNI());
}

TEST(Usuario, getsetNumero){
    Usuario u;
    u.setNumero(-10);
    EXPECT_EQ(0, u.getNumero());
    u.setNumero(58);
    EXPECT_EQ(58, u.getNumero());
}

TEST(Usuario, getsetFecha){
    Usuario u;
    date d={18,05,2020};
    u.setFecha(d);
    EXPECT_EQ(d, u.getFecha());
}

TEST(Usuario, getsetRestricciones){
    Usuario u;
    u.setRestricciones("No fumar");
    EXPECT_EQ("No fumar", u.getRestricciones());
}