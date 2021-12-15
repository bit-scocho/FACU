/* Punto 9: Imprimir multiplos de 2 del 1 al 1000 */


#include<stdio.h>


//Principio:
int main()
	{
		//Multiplos:
		for (int i = 1; i <= 1000; i++)
			{
				printf("2 * %d = %d\n", i, 2 * i);
			}

		//Fin:
		return 0;
	}