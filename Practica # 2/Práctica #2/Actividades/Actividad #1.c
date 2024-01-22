/*ACTIVIDAD 1*/
/*Programa que pide como dato de entrada el tiempo trancurrido de un 
  vuelo estimado de 120 minutos e imprimir su porcentaje de avance.*/
#include <stdio.h>

int main(){
	
	float tiempo, por;
	printf("Introduzca el tiempo transcurrido de vuelo: ");
	scanf("%f",&tiempo);
	
	por = (tiempo*1)/120.0*100;
	printf(" \nEl porcentaje de avance es de: %f",por);

	return 0;

}

