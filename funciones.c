#include <stdio.h>
#include <stdlib.h>
#include "header_funciones.h"
#include "estructuras_datos.h"

void nuevoIndiceProvincial( float indicesDeProvinciaPorRubro[CANTIDAD_PROVINCIAS][CANTIDAD_RUBROS],
                            float acumulador[CANTIDAD_PROVINCIAS])
{
  int i, j;

  for(i = 0; i < CANTIDAD_PROVINCIAS; i++){
    for(j = 0; j < CANTIDAD_RUBROS; j++){
      acumulador[i] += indicesDeProvinciaPorRubro[i][j];
    }
  }

  for(i = 0; i < CANTIDAD_PROVINCIAS; i++){
    acumulador[i] /= CANTIDAD_RUBROS;
  }

} // fin nuevoIndiceProvincial

void imprimirVector(float vector[], int cantidadElementos)
{
  int i;

  for(i = 0; i < cantidadElementos; i++){
    printf("%-15d%-15.2f\n", i, vector[i]);
  }
} // fin imprimir acumulador

void inicializarVector( float vector[], int cantidadElementos)
{
  int i;

  for(i = 0; i < cantidadElementos; i++){
    vector[i] = 0;
  }
} // fin inicializar acumulador

float nuevoIndiceMensualNacional(float acumulador[CANTIDAD_PROVINCIAS])
{
  int i;
  float acum = 0;

  for(i = 0; i < CANTIDAD_PROVINCIAS; i++){
    acum += acumulador[i];
  }

  return acum / CANTIDAD_PROVINCIAS;
}

void inflacionAcumulada(float inflacionPasada[], float inflacionActual[], float acumulador[])
{
  int i;

  for(i = 0; i < CANTIDAD_MESES; i++){
      acumulador[i] = inflacionPasada[i] - inflacionActual[i];
  }
}
