/*ACTIVIDAD 1*/
/*Dada una cadena de caracteres de longitud máxima 20 caracteres, 
desarrollar un programa en C, el cual lea la cadena de caracteres 
y calcula cuantas veces aparece la secuencia de caracteres AB.*/

#include <stdio.h>
#include <string.h>

int main(){
    int totalAB = 0;
    int i = 0;
	char CLE[20];
	printf("\n Ingrese una cadena de caracteres (puede incluir letras mayusculas): ");
	scanf("%s",CLE);
	fflush(stdin);
	while(CLE[i] != '\0'){
		if(CLE[i] == 'A'){
			if(CLE[i+1] == 'B'){		
				totalAB++;
			}
		}
		i++;
    }
	printf("\n La cadena ingresada es: ");	
    puts(CLE);
	printf("\n El total de veces que aparecio la secuencia AB fue de: %d veces",totalAB);
	return 0;
}

