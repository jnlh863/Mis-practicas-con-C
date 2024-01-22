/*ACTIVIDAD 2*/
/*Programa que calcula la cantidad de votos de cada partido politico de una eleccion, 
  cuya cantidad total de votos fue de 16520.*/
#include <stdio.h>
int main(){
	
	int total_de_votos, PAN, PRI, PT, INDEPENDIENTE, OTROS;
	printf("Introducir el total de votos de la eleccion: ");
	scanf("%d",&total_de_votos);
	
	PAN = (0.4*total_de_votos);
	printf(" \nEl numero de votos para el partido politico PAN es: %d", PAN);
	
	PRI = (0.3*total_de_votos);
	printf(" \nEl numero de votos para el partido politico PRI es: %d", PRI);
	
	PT = (0.15*total_de_votos);
	printf(" \nEl numero de votos para el partido politico PT es: %d", PT);
	
	INDEPENDIENTE = (0.1*total_de_votos);
	printf(" \nEl numero de votos para el partido politico INDEPENDIENTE es: %d", INDEPENDIENTE);
	
	OTROS = (0.05*total_de_votos);
	printf(" \nEl numero de votos para el partido politico OTROS es: %d", OTROS);
		
	return 0;
}

