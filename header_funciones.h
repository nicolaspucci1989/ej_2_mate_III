#ifndef HEADER_FUNCIONES_H_INCLUDED
#define HEADER_FUNCIONES_H_INCLUDED

#include "estructuras_datos.h"

void nuevoIndiceProvincial( float indicesDeProvinciaPorRubro[CANTIDAD_PROVINCIAS][CANTIDAD_RUBROS],
                            float acumulador[CANTIDAD_PROVINCIAS]);
void imprimirAcumulador(float acumulador[CANTIDAD_PROVINCIAS]);

#endif // HEADER_FUNCIONES_H_INCLUDED
