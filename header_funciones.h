#ifndef HEADER_FUNCIONES_H_INCLUDED
#define HEADER_FUNCIONES_H_INCLUDED

#include "estructuras_datos.h"

void imprimirVector(float vector[], int cantidadElementos);
void inicializarVector(float vector[], int cantidadElementos);

void nuevoIndiceProvincial( float indicesDeProvinciaPorRubro[CANTIDAD_PROVINCIAS][CANTIDAD_RUBROS],
                            float acumulador[CANTIDAD_PROVINCIAS]);
float nuevoIndiceMensualNacional(float acumulador[CANTIDAD_PROVINCIAS]);
void inflacionAcumulada(float inflacionPasada[], float inflacionActual[], float acumulador[]);
#endif // HEADER_FUNCIONES_H_INCLUDED
