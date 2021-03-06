/*
 ============================================================================
 Name        : Gil_Recuperatorio_Parcial1_1A.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/*1. Dada  una estructura ePais cuyos campos son id(int), nombre(20 caracteres),
 *  infectados(int), recuperados(int) y muertos(int). Desarrollar una funci?n
 *   llamada actualizarRecuperados que reciba el pa?s y los recuperados del dia y
 *    que acumule estos a los que ya tiene el pa?s. La funci?n no devuelve nada.*/


/*2. Crear una funci?n que se llame invertirCadena que reciba una cadena de caracteres
 *  como par?metro  y su responsabilidad es invertir los caracteres de la misma. Ejemplo
 *   si le pasamos UTN-FRA la deja como ARF-NTU*/


/*3. Crear una funci?n que se llame ordenarCaracteres que reciba una cadena de
 *  caracteres como par?metro  y su responsabilidad es ordenar los caracteres de
 *   manera ascendente dentro de la cadena. Ejemplo si le pasamos "algoritmo" la
 *    deja como "agilmoort"*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;
}ePais;

void actualizarRecuperados(ePais* pais, int* recuperados);

//char invertirCadena(char* cadena);

void ordenarCaracteres(char* cadena);

int main(void) {
	setbuf(stdout, NULL);

	char cadena[20] = "miguel";
	ordenarCaracteres(cadena);
	printf("%s", cadena);



	return EXIT_SUCCESS;
}


void actualizarRecuperados(ePais* pais, int* recuperados)
{
	int contadorRecuperados = 0;

	if(pais != NULL && recuperados > 0)
	{
		if(pais->recuperados == 1)
		{
			contadorRecuperados++;
		}

		*recuperados = *recuperados + contadorRecuperados;
	}
}

/*
char invertirCadena(char* cadena)
{
	char cadenaInvertida;
	int i = 0;

	while(cadena[i++] != '\0');
	printf("%s escrita al reves es: ", cadena);


	while(i >= 0)
	{
		printf("%c" ,cadena[i--]);
	}

	return cadenaInvertida;
}
*/

void ordenarCaracteres(char* cadena)
{
	if(cadena != NULL && strlen(cadena) > 0)
	{
		int aux;
		//int cadena;
		int tam = strlen(cadena);

		if(tam > 0)
		{
			for(int i = 0; i < tam - 1; i++)
				{
					for(int j = i+1; j < tam; j++ )
					{
						if(cadena[i] < cadena[j])
						{
							aux = cadena[i];
							cadena[i] = cadena[j];
							cadena[j] = aux;
						}

					}

				}
		}
	}
}





