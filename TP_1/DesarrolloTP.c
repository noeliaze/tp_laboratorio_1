/*
 * DesarrolloTP.c
 *
 *  Created on: 19 sep. 2021
 *      Author: Admin
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int Sumar(int A, int B);
int Restar(int A, int B);
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

int main(void){

	int resultadoSuma;
	int resultadoResta;
	int primerNumero;
	int segundoNumero;
	int opcion;
	int respuesta;


	do{

			respuesta = utn_getNumero(&opcion,"\Elija una opcion del menu: \n 1. Ingresar el primer numero \n 2. Ingresar el segundo numero \n 3.Mostrar operaciones \n 4. Mostrar resultados \n 5. Salir\n","Error, reingrese una opcion valida\n",1,5,2);
			if(!respuesta)
		{
			switch(opcion)
			{

				case 1:
						printf("\nIngrese el primer numero: ");
						scanf("%d", &primerNumero);
						break;

				case 2:
						printf("\nIngrese el segundo numero: ");
						scanf("%d", &segundoNumero);
						break;

				case 3:

						resultadoSuma = Sumar(primerNumero, segundoNumero);
						printf("\nEl resultado es: %d", resultadoSuma);

						resultadoResta = Restar(primerNumero, segundoNumero);
						printf("\nEl resultado es: %d", resultadoResta);
						break;
			}
		}
	}

	while(opcion != 5);
	return EXIT_SUCCESS;
}

