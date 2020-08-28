/*
 ============================================================================
 Name        : parcialito.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int contador = 0;
	int acumulador = 0;
	float promedio;

	while(1)
	{
		printf("Ingrese un numero: ");
		fflush(stdin);
		scanf("%d",&numero);
		if (numero != 999)
		{
			acumulador += numero;
			contador++;
		}
		else
		{
			break;
		}
	}
	promedio = (float)acumulador/contador;
	printf("El promedio de los numeros ingresados es: %.2f", promedio);
	return 0;
}
