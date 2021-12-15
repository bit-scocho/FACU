/*

› Examen parcial - Seminario II
› Bazyluk Federico
› 12/11/21

*/

//Libs:
#include <stdio.h>
#include <stdbool.h>


//Decl_funcs:
void limp_buff(void);
void clasificar(int arr_a[], int *arr_b, int *arr_c);
void imprimir(int arr[]);


//Princ:
int main(void)
	{
		//Vars:
		int ArrayA[5];
		int ArrayB[5] = {0,0,0,0,0};
		int ArrayC[5] = {0,0,0,0,0};
		int i = 0;
		bool conf = true;

		printf("* Ingrese 5 valores enteros para el arreglo:\n\n");

		while(i < 5)
			{
				printf("%d> ", i + 1);

				if(scanf("%d", &ArrayA[i]) == 0)
					{
						printf("* ERROR: Ingrese un valor numerico entero!!\n\n");
						limp_buff();
					}
					else
						{
							printf("* Dato cargado!\n\n");
							i++;
						}
			}

		clasificar(ArrayA, ArrayB, ArrayC);

		printf("Datos array B: \n");
		imprimir(ArrayB);

		printf("\nDatos array C: \n");
		imprimir(ArrayC);

		return 0;
	}


//Def_funcs:
void clasificar(int arr_a[], int *arr_b, int *arr_c)
	{
		int cont_par = 0, cont_impar = 0;

		for(int i = 0; i < 5; i++)
			{
				if(arr_a[i] % 2 == 0)
					{
						arr_b[i] = arr_a[i];
						cont_par++;
					}
					else
						{
							arr_c[i] = arr_a[i];
							cont_impar++;
						}
			}

		printf("La cantidad de elementos del arrelgo B es %d [Numeros pares]\n", cont_par);
		printf("La cantidad de elementos del arrelgo C es %d [Numeros impares]\n\n", cont_impar);
	}

void limp_buff(void)
	{
		int c;
		while(c = getchar() != '\n')
			{
				/*Nada*/
			}
	}

void imprimir(int arr[])
	{
		for(int i = 0; i < 5; i++)
			{
				printf("%d - %d\n", i, arr[i]);
			}
	}