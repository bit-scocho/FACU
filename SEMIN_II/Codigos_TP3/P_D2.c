
/* PUNTO D.2 - TP3 - CONVERSIONES MONETARIAS */

/*
	Aclaración: Las conversiones están hechas el dia 19/11/21
	por ende es posible que los resultados varíen o no sean del todo exactos.
*/


//Libs:
#include <stdio.h>
#include <stdbool.h>


//Def_funcs:
void conver(int mond, float mont);
void limp_buff(void);


//Principal:
int main(void)
	{
		int moneda;
		float monto;
		bool val = true;

		do
			{
				printf("* Que moneda desea ingresar? \n\n1) Peso Arg \n2) Dolar \n3) Euro \n\n> ");

				if (scanf("%d", &moneda) > 0)
					{
						val = false;
					}
					else
						{
							printf("x ERROR: Ingrese un valor numerico!\n\n");
						}

				if (moneda > 3 || moneda < 1)
					{
						printf("x ERROR: opcion no valida!\n\n");
					}

				limp_buff();
			}while(val || (moneda > 3 || moneda < 1));

		do
			{
				val = true;

				printf("* Ingrese el monto: ");
				if(scanf("%f", &monto) > 0)
					{
						val = false;
					}
					else
						{
							printf("x ERROR: Ingrese un valor numerico!\n\n");
						}

				if(monto < 0)
					{
						printf("x ERROR: Ingrese un monto igual o mayor a 0!\n\n");
					}

				limp_buff();
			}while(val || monto < 0);

		conver(moneda, monto);

		//system("pause");

		//Fin:
		return 0;
	}


//Def_funcs:
void conver(int mond, float mont)
	{
		switch(mond)
			{
				case 1:
					printf("\nEl cambio de %0.02f $ARS (Argentina) es: \nen $USD = %0.02f\t en €EUR = %0.02f\n\n", mont, mont*0.01, mont*0.01);
					break;

				case 2:
					printf("\nEl cambio de %0.02f $USD (EE.UU) es: \nen $ARS = %0.02f\t en €EUR = %0.02f\n\n", mont, mont*100, mont*0.89);
					break;

				case 3:
					printf("\nEl cambio de %0.02f €EUR (Europa) es: \nen $USD = %0.02f\t en $ARS = %0.02f\n\n", mont, mont*1.13, mont*113.40);
					break;

				default:
					/* Nada :) */
					break;
			}
	}

void limp_buff(void)
	{
		while(getchar() != '\n')
			{/* Acá tampoco :) */}
	}
