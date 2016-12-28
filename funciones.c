// Nuevo indice provincial para cada provincial
#include "header_funciones.h"

void nuevoIndiceProvincial(float indicesDeProvinciaPorRubro[CANTIDAD_PROVINCIAS][CANTIDAD_RUBROS])
{
  int i, j;
  float acumulador[CANTIDAD_PROVINCIAS] = {0};

  for(i = 0; i < CANTIDAD_PROVINCIAS; i++){
    for(j = 0; i < CANTIDAD_RUBROS; j++){
      acumulador[i] += indicesDeProvinciaPorRubro[i][j];
    }
  }

  for(i = 0; i < CANTIDAD_PROVINCIAS; i++){
    acumulador[i] /= CANTIDAD_RUBROS;
  }
} // fin nuevoIndiceProvincial
