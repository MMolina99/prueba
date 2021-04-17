/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Hacer una calculadora. Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) �El resultado de A+B es: r�
b) �El resultado de A-B es: r�
c) �El resultado de A/B es: r� o �No es posible dividir por cero�
d) �El resultado de A*B es: r�
e) �El factorial de A es: r1 y El factorial de B es: r2�
5. Salir*/

#include <stdlib.h>

#include "FuncionesTP.h"

int main(void)
{
	setbuf(stdout,NULL);

	float A;
	float B;
	int opcionIngresada;
	float suma;
	float resta;
	float division;
	float multiplicacion;
	float factorialA;
	float factorialB;
	suma=0;
	resta=0;
	division=0;
	multiplicacion=0;
	factorialA=0;
	factorialB=0;

	while(opcionIngresada!=5)
	{
		printf("\n========================================");
		printf("\nBienvenenido a la calculadora ");
		printf("\n1.Ingresar primer n�mero.  \n2.Ingresar segundo n�mero.  \n3.Calcular operaciones   \n4.Informar resultados. \n5.Salir");
		fflush(stdin);
		printf("\nIngrese la opci�n que desea realizar: ");
		scanf("%d", &opcionIngresada);
		printf("\n========================================");
		switch(opcionIngresada)
		{
			case 1:
				A=ingresarPrimerNumero();
				printf("\nEl n�mero que ingres� es: %.2f", A);
				break;
			case 2:
				B=ingresarSegundoNumero();
				printf("\nEl n�mero que ingres� es: %.2f", B);
				break;
			case 3:
				printf("\nEligi� la opci�n calcular operaciones.");
				suma=realizarSuma(A,B);
				resta=realizarResta(A,B);
				division=realizarDivision(A,B);
				multiplicacion=realizarMultiplicacion(A,B);
				factorialA=realizarFactorialA(A);
				factorialB=realizarFactorialB(B);
				break;
			case 4:
				printf("\nEl resultado de la suma es: %.2f", suma);
				printf("\nEl resultado e la resta es: %.2f", resta);
				printf("\nEl resultado de la divisi�n es: %.2f",division);
				printf("\nEl resultado de la multiplicaci�n es: %.2f",multiplicacion);
				if(A<0)
				{
					printf("\nNo se puede calcular el factorial de un n�mero negativo");
				}
				else
				{
					printf("\nEl resultado del factorial A es: %.0f", factorialA);
				}
				if(B<0)
				{
					printf("\nNo se puede calcular el factorial de un n�mero negativo");
				}
				else
				{
					printf("\nEl resultado del factorial B es: %.0f", factorialB);
				}
				break;
			case 5:
				printf("\nSalir de la calculadora.");
				break;
		}
	}
	return EXIT_SUCCESS;
}
