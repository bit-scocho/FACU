//Libs:
#include <stdio.h>


//Decl_func:
void limp_buff(void);


//Princ:
int main(void)
	{
		//Vars:
		float valor, sum = 0, max, min;
		int i = 0;

		printf("> Ingrese valores numericos:\n");
		while (i < 5)
			{
				printf("%d> ", i+1);

				if (scanf("%f", &valor) != 0)
					{
						if (i == 0)
							{
								min = valor;
								max = valor;
							}
							else
								{
									if (valor < min)
										{
											min = valor;
										}
										else
											{
												if (valor > max)
													{
														max = valor;
													}
											}
								}

						sum += valor;
						i++;
					}
					else
						{
							limp_buff();
							printf("> ERROR: Ingrese datos numericos!\n\n");
						}
			}

		printf("> El minimo es [ %0.2f ]\n\n", min);
		printf("> La media es [ %0.2f ]\n\n", sum / i);
		printf("> El maximo es [ %0.02f ]\n\n", max);


		//Fin:
		return 0;
	}


//def_func:
void limp_buff(void)
	{
		int c;
		while (c = getchar() != '\n')
			{/*nada*/}
	}