
/* Punto 15: Ingresar valores de lado y altura de un rectangulo y calcular perimetro y area */


//Libs:
#include<stdio.h>

//Principal:
int main()
	{
		//Vars:
		float lado, alto, perim, area;

		//Ingreso datos:
		do
			{
				printf("> Ingrese el lado del rectangulo: "); scanf("%f", &lado);
				printf("> Ingrese el alto del rectangulo: "); scanf("%f", &alto);

				//printf("Lado › %0.2f / Alto › %0.2f\n\n", lado, alto);

				if (lado < 0 || alto < 0)
					{
						printf("* ERROR: El numero debe ser mayor a 0!\n\n");
					}
			}
		while (lado < 0 || alto < 0);

		//Operaciones:
		perim = 2 * (lado + alto);
		area = lado * alto;

		//Impresion final:
		printf("\n");
		printf("> El perimetro del rectangulo es %0.2f y el area es %0.2f\n",perim ,area);



		//Fin:
		return 0;
	}