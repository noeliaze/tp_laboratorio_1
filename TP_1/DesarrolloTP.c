/*
 * DesarrolloTP.c
 *
 *  Created on: 19 sep. 2021
 *      Author: Admin
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

float sumar(float A, float B);
float restar(float A, float B);
float multiplicar(float A, float B);
float dividir(float A, float B);
float factorialOperandoA(float A);
float factorialOperandoB(float B);

int main(void) {

	setbuf(stdout, NULL);

	int opcion;
	float operandoA;
	float operandoB;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
	float resultadoFactorialA;
	float resultadoFactorialB;

	do {

		printf("Bienvenido. Ingrese una opcion del menu: \n 1. Ingresar el primer operando.\n \n 2. Ingresar el segundo operando.\n \n 3. Calcular todas las operaciones.\n \n 4. Mostrar resultados.\n \n5. Salir.\n");
		scanf("%d",&opcion);


		switch(opcion) {

		case 1:
			printf("Valor del primer operando: ");
			scanf("%f", &operandoA);

			break;

		case 2:
			printf("Valor del segundo operando: ");
			scanf("%f", &operandoB);
			break;

		case 3:
			resultadoSuma = sumar(operandoA, operandoB);
			resultadoResta = restar(operandoA, operandoB);
			resultadoMultiplicacion = multiplicar(operandoA, operandoB);
			resultadoDivision = dividir(operandoA, operandoB);
			resultadoFactorialA = factorialOperandoA(operandoA);
			resultadoFactorialB = factorialOperandoB(operandoB);
			break;

		case 4:
			printf("\nEl resultado de la suma de %f + %f es %f\n", operandoA, operandoB, resultadoSuma);
			printf("\nEl resultado de la resta de %f - %f es: %f\n", operandoA, operandoB, resultadoResta);
			printf("\nEl resultado de la multiplicacion de %f * %f es: %f\n", operandoA, operandoB, resultadoMultiplicacion);
			printf("\nEl resultado de la division de %f sobre %f es: %f\n", operandoA, operandoB, resultadoDivision);
			printf("\n El resultado del factorial de %f es: %f\n", operandoA, resultadoFactorialA);
			printf("\n El resultado del factorial de %f es: %f\n", operandoB, resultadoFactorialB);
			break;
		}
	} while (opcion != 5);

	return EXIT_SUCCESS;
}

