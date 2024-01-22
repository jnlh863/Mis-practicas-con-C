/*ACTIVIDAD 3*/
/*Programa que pide al usuario un numero entero, imprimiendo 
  las ultimas cifras por separado,empezando con la ultima cifra 
  y despues la penultima cifra*/
  
#include <stdio.h>
int main(){
	
	int numero, primercifra, segundacifra;
	printf("Introducir numero: ");
	scanf("%d",&numero);
	
	primercifra = (numero%10);
	printf(" \nLa ultima cifra es: %d", primercifra);
	
	segundacifra = ((numero-primercifra)/10)%10;
	printf(" \nLa penultima cifra es: %d", segundacifra);
	
	return 0;
}




