//Prueba con cadenas y scanf

#include<stdio.h>
#include<stdlib.h>

int main(void)
	{
		/*
		char nomb[10];

		printf("> Ingresa tu nombre: ");
		scanf("%5s", nomb);

		printf("%s", nomb);
		*/

		int num;
		printf("> Ingrese un numero: ");
		scanf("%4d", &num);
		printf("%d", num);

		return 0;
	}