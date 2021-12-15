//Libs:
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


//Decl_funcs:
void limp_buff(void); //Para limpiar el buff
void carg_dat(int *val); //Para comprobar errores al cargar datos


//Princ:
int main(void)
	{
		//Vars:
		int val_a, val_b;

		printf("* Ingrese 2 valores enteros:\n");

		carg_dat(&val_a); carg_dat(&val_b);

		//printf("primer valor %d y segundo valor %d", val_a, val_b);

		if(val_a < val_b)
			{
				printf("* Arriba ^\n\n");
			}
			else
				{
					if(val_a > val_b)
						{
							printf("* Abajo v\n\n");
						}
						else
							{
								printf("* Iguales =\n\n");
							}
				}

		return 0;
	}


//Def_funcs:
void limp_buff(void)
	{
		while(getchar() != '\n')
			{/*Nada*/}
	}

void carg_dat(int *val)
	{
		bool conf = true;
		int aux_val;

		do
			{
				printf("> ");
				if(scanf("%d", &aux_val) != 0)
					{
						*val = aux_val;
						printf("* Valor cargado con exito!\n\n");
						conf = false;
					}
					else
						{
							printf("* Error: Ingrese un valor entero!\n\n");
							limp_buff();
						}
			}
		while(conf);

		//printf("* Valor cargado es %d\n", val);
	}