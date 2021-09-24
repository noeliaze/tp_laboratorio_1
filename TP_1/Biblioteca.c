/*
  ARCHIVO DE IMPLEMENTACION

 */
#include "Biblioteca.h"

/** \brief Devuelve la suma de dos numeros ingresados.
 *
 * \param float pide el primer numero al usuario.
 * \param float pide el segundo numero al usuario.
 * \return retorna el resultado de la suma.
 */
float sumar(float A, float B){
	float resultado;

	resultado = A+B;

	return resultado;
}


/** \brief Devuelve la resta de dos numeros ingresados.
 *
 * \param float pide el primer numero al usuario.
 * \param float pide el segundo numero al usuario.
 * \return retorna el resultado de la resta.
 */
float restar(float A, float B){
	float resultado;

	resultado = A-B;

	return resultado;
}


/** \brief Devuelve la multiplicacion de dos numeros ingresados.
 *
 * \param float pide el primer numero al usuario.
 * \param float pide el segundo numero al usuario.
 * \return retorna el resultado de la multiplicacion.
 */
float multiplicar(float A, float B){
	float resultado;

	resultado = A*B;

	return resultado;
}


/** \brief Devuelve la division de dos numeros ingresados.
 *
 * \param float pide el primer numero al usuario.
 * \param float pide el segundo numero al usuario.
 * \return retorna el resultado de la division.
 */
float dividir(float A, float B){
	float resultado;

		resultado = A / B;

	return resultado;
}


/** \brief Devuelve el factorial de un numero ingresado.
 *
 * \param float pide el numero al usuario.
 * \return retorna el resultado del factorial.
 */
float factorialOperandoA(float A){
	float resultado;

	if(A==1){
		return 1;
	}
	resultado = A * factorialOperandoA(A-1);
		return resultado;
}


/** \brief Devuelve el factorial de un numero ingresado.
 *
 * \param float pide el numero al usuario.
 * \return retorna el resultado del factorial.
 */
float factorialOperandoB(float B){
	float resultado;

	if(B==1){
		return 1;
	}

		resultado = B * factorialOperandoB(B-1);
		return resultado;
}
