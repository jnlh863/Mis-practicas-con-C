/*ACTIVIDAD 2*/
/*En un cine se tienen 3 diferentes clases de boletos. Desarrollar un programa en el cual:
a)	Se lea el precio de las tres clases de boletos.
b)	Calcular e imprimir el número de boletos vendidos de cada tipo.
c)	Calcular e imprimir cual tipo de boleto es el que menos se vendió.
d)	Calcular e imprimir el total recaudado en taquilla.
Además, se sabe que durante el día se realizaron un total de n ventas de boletos.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
	
	int BC1,BC2,BC3,precio1,precio2,precio3,totaltaquilla,menor,i,n,n1,n2,n3,claseBoleto,can1=0,can2=0,can3=0;
	printf("\n Ingrese la cantidad de boletos vendidos: ");
	scanf("%d",&n);
	printf("\n Precio de boleto CLASE 1: ");
	scanf("%d",&BC1);
	printf("\n Precio de boleto CLASE 2: ");
	scanf("%d",&BC2);
	printf("\n Precio de boleto CLASE 3: ");
	scanf("%d",&BC3);
	
	for(i=0;i<n;i++){
		printf("\n Seleccione la clase del boleto:\n\t1)Clase1\n\t2)Clase2\n\t3)Clase3\n\tOpcion seleccionada: ");
	    scanf("%d",&claseBoleto);
		switch(claseBoleto){
			case 1: 
			    printf("\n");
			    printf("Ingrese la cantidad de boletos: ");
			    scanf("%d",&n1);
			    can1 = can1 + n1;		
			    break;
			case 2:
				printf("\n");
				printf("Ingrese la cantidad de boletos: ");
			    scanf("%d",&n2);
				can2 = can2 + n2;
				break;
			case 3:
				printf("\n");
				printf("Ingrese la cantidad de boletos: ");
			    scanf("%d",&n3);
				can3 = can3 + n3;
				break;
			default: printf("\n\n Seleccion invalida \n\n");
		}
		precio1 = can1 * BC1;
		precio2 = can2 * BC2;
		precio3 = can3 * BC3;
		totaltaquilla = precio1 + precio2 + precio3;
	}
	if(can1 < can2 && can1 < can3){
		menor = 1;
	}
	if(can2 < can1 && can2 < can3){
		menor = 2;
	}
	if(can3 < can1 && can3 < can2){
		menor = 3;
	}
	system("pause");
	system("cls");
	printf("\n\tBoletos clase 1 vendidos fue de %d\n\tBoletos clase 2 vendidos fue de %d\n\tBoletos clase 3 vendidos fue de %d\n\t",can1,can2,can3);
	printf("\n\tEl tipo de boleto que menor se vendio fue: %d",menor);
	printf("\n\tEl total recaudado en taquilla fue de: $%d",totaltaquilla);
	getch();
	return 0;
}