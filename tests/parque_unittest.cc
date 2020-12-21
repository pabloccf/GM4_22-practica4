#include <gtest/gtest.h>
#include "parque.h"
#include "date.h"
#include "ubicacion.h"
#include "ruta.h"


TEST(Parque, getsetNombre){
    Parque p;
    p.setNombre("Doñana");
    EXPECT_EQ("Doñana", p.getNombre());
}

TEST (Parque, getsetSuperficie) {
    Parque p;
    p. setSuperficie (- 10 );
    EXPECT_EQ ( 0 , p. getSuperficie ());
    p. setSuperficie ( 10 );
    EXPECT_EQ ( 10 , p. getSuperficie ());
}

TEST (Parque, getsetFecha_declaracion) {
    Parque p;
    date d = { 23 , 8 , 1998 };
    p. setFecha_declaracion (d);
    EXPECT_EQ (d, p. getFecha_declaracion ());
}

TEST (Parque, getsetUbicacion) {
    Parque p;
    Ubicacion u = { "Andalucia" , "Cordoba" , "Cordoba" };
    p. setUbicacion (u);
    EXPECT_EQ (u.localizacion, p. getUbicacion ().localizacion);
    EXPECT_EQ (u.municipio, p. getUbicacion ().municipio);
    EXPECT_EQ (u.provincia, p. getUbicacion ().provincia);
}

TEST (Parque, getsetRutas) {
    Parque p;
    std::vector<Ruta> v;
    v.push_back(Ruta("lopez"));
    v.push_back(Ruta("gosalvez"));
    v.push_back(Ruta("paolo"));
    p. setRutas (v);
    
    std::vector<Ruta> v2=p.getRutas();
    EXPECT_TRUE (std::equal(v.begin(), v.end(), v2.begin()));
}
