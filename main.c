#include <stdio.h>
#include <stdlib.h>
#include "header_carga.h"
#include "header_funciones.h"
#include "estructuras_datos.h"

int main()
{
    float indicesDeProvinciaPorRubro[CANTIDAD_PROVINCIAS][CANTIDAD_RUBROS], acumulador[CANTIDAD_PROVINCIAS],
          inflacionPasada[CANTIDAD_MESES], inflacionActual[CANTIDAD_MESES], acumInflacion[CANTIDAD_MESES];


    cargarIndicesProvinciaRubro(indicesDeProvinciaPorRubro);
    cargarInflacionPasada(inflacionPasada);
    cargarInflacionActual(inflacionActual);

    // Nuevo indice provincial para cada provincia
    inicializarVector(acumulador, CANTIDAD_PROVINCIAS);
    nuevoIndiceProvincial(indicesDeProvinciaPorRubro, acumulador);
    printf("%-15s%-15s\n","Provincia", "Indice");
    imprimirVector(acumulador, CANTIDAD_PROVINCIAS);

    // Nuevo indice mensual nacional
    inicializarVector(acumulador, CANTIDAD_PROVINCIAS);
    nuevoIndiceProvincial(indicesDeProvinciaPorRubro, acumulador);
    putchar('\n');
    printf("Nuevo indice mensual nacional %.2f\n", nuevoIndiceMensualNacional(acumulador));
    putchar('\n');

    //Cual fue la inflación acumulada desde el mismo mes del 2015 al mes actual tratado
    inicializarVector(acumInflacion, CANTIDAD_MESES);
    inflacionAcumulada(inflacionPasada, inflacionActual, acumInflacion);
    printf("%-15s%-15s\n", "Mes", "Inflacion acumulada");
    imprimirVector(acumInflacion, CANTIDAD_MESES);

    return 0;
}
