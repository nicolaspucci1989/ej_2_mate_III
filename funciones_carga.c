#include <stdio.h>
#include <stdlib.h>
#include "header_carga.h"
#include "estructuras_datos.h"

// 2 provincias, 2 rubros
void cargarIndicesProvinciaRubro(float indicesDeProvinciaPorRubro[CANTIDAD_PROVINCIAS][CANTIDAD_RUBROS])
{
		indicesDeProvinciaPorRubro[0][0] = 22.3;
		indicesDeProvinciaPorRubro[0][1] = 32.1;

		indicesDeProvinciaPorRubro[1][0] = 10.2;
		indicesDeProvinciaPorRubro[1][1] = 7.2;
}

void cargarInflacionPasada(float inflacionPasada[])
{
	inflacionPasada[0] = 2.45;
	inflacionPasada[1] = 7.5;
	inflacionPasada[2] = 3.90;
}

void cargarInflacionActual(float inflacionActual[])
{
	inflacionActual[0] = 9.50;
	inflacionActual[1] = 1.20;
	inflacionActual[2] = 8.10;
}
