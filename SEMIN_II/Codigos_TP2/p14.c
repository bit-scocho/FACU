/* Punto 14: Calcular el area y perimetro de una circunferencia */

#include<stdio.h>


int main()
	{
		//Vars:
		float radio, diam, perim, area;
		float const PI = 3.14;

		//Ingreso datos:
		do
			{
				printf("> Ingrese el radio de la circunferencia: "); scanf("%f", &radio);

				if (radio < 0)
					{
						printf("* ERROR: El numero debe ser mayor a 0!\n\n");
					}
			}
		while (radio < 0);

		//Calculos:
		diam = 2 * radio;
		perim = diam * PI;
		area = PI * (radio * radio);

		printf("> El perimetro del rectangulo es %0.2f y el area es %0.2f\n",perim ,area);


		return 0;
	}