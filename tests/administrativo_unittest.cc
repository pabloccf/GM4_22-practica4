#include "administrativo.h"
#include <gtest/gtest.h>

TEST(Administrativo, getsetUsuario){
    Administrativo a;
    a.setUsuario("pabloccf");
    EXPECT_EQ("pabloccf", a.getUsuario());
}

TEST(Administrativo, getsetPassword){
    Administrativo a;
    a.setPassword("practicasis_20-21");
    EXPECT_EQ("practicasis_20-21", a.getPassword());
}