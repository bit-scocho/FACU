//Libs:
#include <stdio.h>
#include <stdbool.h>


void enteros(void);
void flotantes(void);
void caracter(void);
void limp_buff(void);


int main(void)
	{
		int opc;
		bool conf;

		do
			{


				printf("* Elija un tipo de dato: \n1) Entero \n2) Flotante \n3) Char\n\n");

				printf("> ");

				if(scanf("%d", &opc) != 0)
					{
						conf = false;
					}
					else
						{
							printf("* Error!\n\n");
						}
				limp_buff();
			}
		while(conf);

		switch(opc)
			{
				case 1:
					enteros();
					break;

				case 2:
					flotantes();
					break;

				case 3:
					caracter();
					break;

				default:
					printf("La opcion no es correcta!");
					break;
			}

		return 0;
	}


void enteros(void)
	{
		int arr[5], val;

		printf("* Ingrese valores para el arreglo:\n\n");

		for(int i = 0; i < 5; i++)
			{
				printf("%d> ",i + 1); scanf("%d", &arr[i]);
			}

		printf("Que elemento desea obtener del arreglo?: "); scanf("%d", &val);

		int j = 0;
		while(j < 5 && val != arr[j])
			{
				j++;
			}

		if(val == arr[j])
			{
				printf("*El elemento esta en la posicion %d del arreglo.\n", j);
			}
	}

void flotantes(void)
	{
		float arr[5], val;

		printf("* Ingrese valores para el arreglo:\n\n");

		for(int i = 0; i < 5; i++)
			{
				printf("%d> ",i + 1); scanf("%f", &arr[i]);
			}

		printf("Que elemento desea obtener del arreglo?: "); scanf("%f", &val);

		int j = 0;
		while(j < 5 && val != arr[j])
			{
				j++;
			}

		if(val == arr[j])
			{
				printf("*El elemento esta en la posicion %d del arreglo.\n", j);
			}
	}

void caracter(void)
	{
		char arr[5], val, ax;

		printf("* Ingrese valores para el arreglo:\n\n");

		for(int i = 0; i < 5; i++)
			{
				printf("%d> ",i + 1); scanf("%c", ax);
				arr[i] = ax;

				limp_buff();
			}

		printf("Que elemento desea obtener dela arreglo?: "); scanf("%c", val);

		int j = 0;
		while(j < 5 && val != arr[j])
			{
				j++;
			}

		if(val == arr[j])
			{
				printf("*El elemento esta en la posicion %d del arreglo.\n", j);
			}
	}

void limp_buff(void)
	{
		while(getchar() != '\n')
			{}
	}