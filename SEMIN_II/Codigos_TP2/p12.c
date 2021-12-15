/* Punto 12: Calcular factorial */


#include<stdio.h>


int main()
	{
		//Vars:
		int valor; //Max › 65!
		long result = 1;

		//Ingreso datos:
		do
			{
				printf("> Ingrese un numero: "); scanf("%d", &valor);

				if (valor < 0)
					{
						printf("* ERROR: El numero debe ser mayor a 0!\n\n");
					}
			}
		while (valor < 0);

		if (valor < 66)
			{
				//Factoreo:
				for (int i = valor; i > 0; i--)
					{
						result *= i;
					}

				printf("> El factorial de %d es %llu\n", valor, result);
			}
		else
			{
				printf("> Factorial muy grande!\n\n");
			}


		//Fin:
		return 0;
	}