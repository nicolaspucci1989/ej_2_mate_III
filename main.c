#include <stdio.h>
#include <stdlib.h>
#include "header_funciones.h"
#include "header_carga.h"
#include "estructuras_datos.h"

int main()
{
    float indicesDeProvinciaPorRubro[CANTIDAD_PROVINCIAS][CANTIDAD_RUBROS];

    cargarIndicesProvinciaRubro(indicesDeProvinciaPorRubro);
    nuevoIndiceProvincial(indicesDeProvinciaPorRubro);

    return 0;
}
