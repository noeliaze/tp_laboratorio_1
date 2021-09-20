/*
  ARCHIVO DE IMPLEMENTACION

 */
#include "Biblioteca.h"

int Sumar(int A, int B){
	int resultado;

	resultado = A+B;

	return resultado;
}

int Restar(int A, int B){
	int resultado;

	resultado = A-B;

	return resultado;
}

int Multiplicar(int A, int B){
	int resultado;

	resultado = A*B;

	return resultado;
}

float Dividir(int A, int B){
	int resultado;

	resultado = A/B;

	return resultado;
}


int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos) {
	int ret;
	int num;

	while(reintentos>0){

			printf(mensaje);
			if(scanf("%d",&num)==1) {
			if(num<=maximo && num>=minimo)
			break;
			}

		reintentos--;
		printf(mensajeError);
		}

		if(reintentos==0) {
		ret=-1;
		}
		else {
		ret=0;
		*pResultado = num;
		}

		return ret;
}



