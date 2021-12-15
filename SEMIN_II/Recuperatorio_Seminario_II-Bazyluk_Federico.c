/* 

	-o RECUPERATORIO - SEMIN_II

	-o LENGUAJE C

	-o BAZYLUK FEDERICO

	Nota:
		* Optimizar el codigo en Campo Patente y Campo Anio dentro del "for" del main().
		* Evitar que función BuscarXanio() imprima datos inecesarios o que no existen.
		* Verificar que el programa no permita errores de tipeo al cargar datos.
		* Procurar terminar el codigo de una vez por todas XD.

*/


//Libs:
#include <stdio.h>
#include <stdbool.h>


//Regist:
struct autos
	{
		int Patente; //x3
		char Marca[10];
		int Anio; //x4
	};
typedef struct autos AUTOS;


//Decl_func:
void BuscarXanio(AUTOS inf_autos[], int anio);
int cant_unid(int num, int limit_unid);
void limp_buff(void);


//Princ:
int main(void)
	{
		//Arrays:
		AUTOS ArrayAutos[5];

		//Var:
		int anio_opc;

		for (int i = 0; i < 3; i++)
			{
				//Ingresa Patente:
				bool valor = true;
				do
					{
						printf("\n* Ingresa la patente del auto num. %d (3 digitos): ", i + 1);
						if(scanf("%d", &ArrayAutos[i].Patente) > 0)
							{
								if(ArrayAutos[i].Patente > 0)
									{
										if(cant_unid(ArrayAutos[i].Patente, 3) == 0)
											{
												valor = false;
											}
											else
												{
													printf("* ERROR: Ingrese 3 digitos!\n\n");
												}
									}
									else
										{
											printf("* ERROR: El valor debe ser mayor a 0!\n\n");
										}
							}
							else
								{
									printf("* ERROR: Ingrese un dato numerico!\n\n");
								}
						limp_buff();
					}while(valor);

				//Ingresa Marca:
				printf("* Ingresa la marca del automovil num. %d (10 digitos max.): ", i + 1);
				scanf("%10s", ArrayAutos[i].Marca);
				limp_buff();

				//Ingresa Año:
				valor = true;
				do
					{
						printf("* Ingresa el año del automovil num. %d (4 digitos): ", i + 1);
						if(scanf("%d", &ArrayAutos[i].Anio) > 0)
							{
								if(ArrayAutos[i].Anio > 0)
									{
										if(cant_unid(ArrayAutos[i].Anio, 4) == 0)
											{
												valor = false;
											}
											else
												{
													printf("* ERROR: Ingrese 4 digitos!\n\n");
												}
									}
									else
										{
											printf("* ERROR: El valor debe ser mayor a 0!\n\n");
										}
							}
							else
								{
									printf("* ERROR: Ingrese un dato numerico!\n\n");
								}
						limp_buff();
					}while(valor);

				printf("\n> Datos del automovil num. %d cargados correctamente!\n\n", i + 1);
			}

		printf("> Indique el año del automovil que desea encontrar: ");
		scanf("%4d", &anio_opc);
		BuscarXanio(ArrayAutos, anio_opc);

		//Fin
		return 0;
	}


//Def_func:
void BuscarXanio(AUTOS inf_autos[], int anio)
	{
		AUTOS ArrayAutosAnio[5];
		int j = 0;

		for(int i = 0; i < 5; i++)
			{
				if(inf_autos[i].Anio == anio)
					{
						ArrayAutosAnio[j] = inf_autos[i];
						j++;
					}
			}

		for(int i = 0; i < 5; i++)
			{
				printf("Patente > %d | Marca > %s | Año > %d\n", ArrayAutosAnio[i].Patente, ArrayAutosAnio[i].Marca, ArrayAutosAnio[i].Anio);
			}
	}

int cant_unid(int num, int limit_unid)
	{
		int num_unid = 0;
		int val = num;

		while(val > 0)
			{
				val /= 10;

				num_unid++;
			}

		if(num_unid == limit_unid)
			{
				return 0;
			}
			else
				{
					return 1;
				}
	}

void limp_buff(void)
	{
		while(getchar() != '\n')
			{/*Limpia*/}
	}