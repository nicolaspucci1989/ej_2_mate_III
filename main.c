#include <stdio.h>
#include <stdlib.h>
#include "header_carga.h"
#include "header_funciones.h"
#include "estructuras_datos.h"

int main()
{
    float indicesDeProvinciaPorRubro[CANTIDAD_PROVINCIAS][CANTIDAD_RUBROS], acumulador[CANTIDAD_PROVINCIAS];

    cargarIndicesProvinciaRubro(indicesDeProvinciaPorRubro);

    // Nuevo indice provincial para cada provincia
    nuevoIndiceProvincial(indicesDeProvinciaPorRubro, acumulador);
    imprimirAcumulador(acumulador);

    // Nuevo indice mensual nacional
    inicializarAcumulador(acumulador);
    nuevoIndiceProvincial(indicesDeProvinciaPorRubro, acumulador);
    printf("Nuevo indice mensual nacional %.2f\n", nuevoIndiceMensualNacional(acumulador));

    return 0;
}
