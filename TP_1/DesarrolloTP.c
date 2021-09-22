/*
 * DesarrolloTP.c
 *
 *  Created on: 19 sep. 2021
 *      Author: Admin
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int sumar(int A, int B);
int restar(int A, int B);
int multiplicar(int A, int B);
int dividir(int A, int B);
//int PedirNumero(char mensaje[]);

int main(void) {

	setbuf(stdout, NULL);
	int opcion;
	int operandoA;
	int operandoB;
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	int resultadoDivision;
	int resultadoFactorial;

	do {
		printf("Ingrese una opcion del menu:\n 1. Ingresar el primer operando.\n \n 2. Ingresar el segundo operando.\n \n 3. Calcular todas las operaciones.\n \n 4. Mostrar resultados.\n \n5. Salir.");
		scanf("%d", &opcion);

		switch (opcion) {

		case 1:
			printf("Valor del primer operando: ");
			scanf("%d", &operandoA);
			break;

		case 2:
			printf("Valor del segundo operando: ");
			scanf("%d", &operandoB);
			break;

		case 3:
			resultadoSuma = sumar(operandoA, operandoB);
			resultadoResta = restar(operandoA, operandoB);
			resultadoMultiplicacion = multiplicar(operandoA, operandoB);
			resultadoDivision = dividir(operandoA, operandoB);

			break;

		case 4:
			printf("\nEl resultado de la suma es %d\n", resultadoSuma);
			printf("\nEl resultado de la resta es %d\n", resultadoResta);
			printf("\nEl resultado de la multiplicacion es %d\n", resultadoMultiplicacion);
			printf("\nEl resultado de la division es %d\n", resultadoDivision);

			break;
		}
	} while (opcion != 5);

	return EXIT_SUCCESS;
}

