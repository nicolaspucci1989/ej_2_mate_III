#include <stdio.h>
#include <stdlib.h>
#include "header_funciones.h"

void nuevoIndiceProvincial(float indicesDeProvinciaPorRubro[CANTIDAD_PROVINCIAS][CANTIDAD_RUBROS])
{
  int i, j;
  float acumulador[CANTIDAD_PROVINCIAS] = {0};

  void imprimirAcumulador(float acumulador[CANTIDAD_PROVINCIAS]);

  for(i = 0; i < CANTIDAD_PROVINCIAS; i++){
    for(j = 0; i < CANTIDAD_RUBROS; j++){
      acumulador[i] += indicesDeProvinciaPorRubro[i][j];
    }
  }

  for(i = 0; i < CANTIDAD_PROVINCIAS; i++){
    acumulador[i] /= CANTIDAD_RUBROS;
  }

  imprimirAcumulador(acumulador);
} // fin nuevoIndiceProvincial

void imprimirAcumulador(float acumulador[CANTIDAD_PROVINCIAS])
{
  int i;

  printf("%-15s%-15s", "Provincia", "Indice");
  for(i = 0; i < CANTIDAD_PROVINCIAS; i++){
    printf("%-15d%-15.2f\n", i, acumulador[i]);
  }
}
