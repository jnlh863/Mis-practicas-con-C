/*ACTIVIDAD 2*/
/*Dado una cadena de caracteres de longitud máxima 50 carateres, 
desarrollar un programa en C, el cual lea la cadena y después 
convierta el principio y el fin de cada palabra en su equivalente en mayúscula.*/

#include <stdio.h>
#include <string.h>

int main(){
	int i=0,cont=0;
	char CA[50];
	printf("\n Ingrese una oracion: ");
	gets(CA);
	fflush(stdin);
	printf("\n La oracion o cadena ingresada original es: ");
	puts(CA);
	while(CA[i] != '\0'){
		if(i == 0){
			if(CA[0] >= 'a' && CA[0] <= 'z'){
				CA[0] = CA[0] - ('a'- 'A');
			}
		}else{
			cont++;
		}
		if(CA[i] == ' '){
			if(CA[cont-1] >= 'a' && CA[cont-1] <= 'z'){
				CA[cont-1] = CA[cont-1] - ('a'- 'A');
			}
			if(CA[cont+1] >= 'a' && CA[cont+1] <= 'z'){
				CA[cont+1] = CA[cont+1] - ('a'- 'A');
			}
		}
		i++;
	}
	printf("\n La oracion o cadena modificada es: ");
	puts(CA);
	return 0;
}