/* USO DE PUNTEROS */

#include <stdio.h>

int main(void)
	{
		//Vars:
		int a = 10;
		int b = 20;

		int *z = &b; //De esta forma se declara el puntero y solo puede recibir espacios de memoria mediante &.
		printf("El valor de b es %d y el valor de *z es %d\n",b ,*z);


		*z = a; //Se modifica el valor que tiene la direccion de memoria de la variable "b".
		printf("El valor de a es %d y el valor de *z es %d\n",b ,*z);

		return 0;
	}
