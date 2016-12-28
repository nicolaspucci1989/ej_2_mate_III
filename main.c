#include <stdio.h>
#include <stdlib.h>
#include "header_carga.h"
#include "header_funciones.h"
#include "estructuras_datos.h"

int main()
{
    int i, j;
    float indicesDeProvinciaPorRubro[CANTIDAD_PROVINCIAS][CANTIDAD_RUBROS];

    cargarIndicesProvinciaRubro(indicesDeProvinciaPorRubro);
    for (i = 0; i< CANTIDAD_PROVINCIAS; i++){
      for(j = 0; j < CANTIDAD_RUBROS; j++){
        printf("%.2f\n", indicesDeProvinciaPorRubro[i][j]);
      }
    }
    nuevoIndiceProvincial(indicesDeProvinciaPorRubro);

    return 0;
}
