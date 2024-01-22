/*ACTIVIDAD 3*/
/*Una compañía que vende refrescos embotellados realizó una encuesta a n personas, 
en dicha encuesta se pregunta lo siguiente:
    a) Si la encuestada o encuestado toma o no refresco embotellado.
    b) Si toma, de qué marca prefiere el refresco (1.- Pepsi Cola, 2.- Coca Cola, 
    3.- Otra marca).
    c) Si toma, cuantos refrescos toma en un día.
Se pide que desarrolles un programa en C que conteste e imprima lo siguiente:
    a) ¿Cuántas personas que no tomaron refresco fueron encuestados?
    b) ¿Cuántas personas tomaron de la marca 1, tomaron de la marca 2?
    c) ¿Calcular el promedio por día de refrescos, de las personas que la consumen?*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int opcR,n,i,NR=0,M1=0,M2=0,M3=0,CRPD,sumaCRPD=0;
	char opc;
	float promR;
	printf("\n Cantidad de encuestados: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n Usted toma refresco embotellado?:\n\ts)SI\n\tn)NO\n\tOpcion seleccionada: ");
		fflush(stdin);
		scanf("%s",&opc);
		switch(opc){
			case 's':
			    printf("\n De que marca prefiere el refresco?:\n\t1)Pepsi Cola\n\t2)Coca Cola\n\t3)Otra marca\n\tOpcion elegida: ");
			    scanf("%d",&opcR);
			    printf("\n Ingrese la cantidad de refrescos que toma en un dia: ");
			    scanf("%d",&CRPD);
			    switch(opcR){
				    case 1: 
				        M1 = M1 + 1;
				        break;
				    case 2:
					    M2 = M2 + 1;
					    break;
				    case 3:
					    M3 = M3 + 1;
					    break;
				    default: printf("\n Seleccion invalida \n");
		    	}
			    sumaCRPD = sumaCRPD + CRPD;
			    promR = sumaCRPD/n;
			    break;
			case 'n':
				NR = NR + 1;
				break;
			default: printf("\n Seleccion invalida \n");
			
		}
		system("pause");
		printf("\n");
		system("cls");			
	}
	printf("\n\tCuantas personas encuestadas no toman refresco?: %d",NR);
	printf("\n");
	printf("\n\tCuantas personas encuestadas toman de la marca 1?: %d\n\tCuantas personas encuestadas toman de la marca 2?: %d",M1,M2);
	printf("\n");
	printf("\n\tEl promedio de la cantidad de refresco que beben por dia las personas encuestadas es: %f",promR);
	printf("\n");
	return 0;
}
