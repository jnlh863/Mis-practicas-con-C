/*ACTIVIDAD 1*/
/* Desarrollar un programa en C, para calcular e imprimir el total que deben pagar n estudiantes en su inscripción,
   se introducirá la matricula del alumno y el total de créditos a inscribir. El pago total que debe realizar
   es en base a la cantidad de créditos inscritos para el semestre a cursar:

   A. Los primeros 20 créditos, cada uno tiene un costo de $150.00
   B. Los siguientes 15 créditos, cada uno tiene un costo de $250.00
   C. Los créditos que estén por encima de los 35, cada uno un costo de $350.00

Dependiendo de la edad del estudiante se puede obtener un descuento así:
   Edad			Descuento
   < 20			10% en el costo de los créditos inscritos entre los 21 y 35
   > 40			5% en el costo de los créditos inscritos superiores a los 35
> 20 y < 40		20% en el costo de los 20 primeros créditos inscritos*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define OPC1 150
#define OPC2 250
#define OPC3 350

int main(){

	char Mat['N'][30];
	int tCreditos['N'],*tC['N'];
	int Edad['N'],*Age['N'];
	int N,i;
	float Total['N'],*T['N'];

	printf("\n                                         Inscripciones                                                           ");
	printf("\n");
	printf("\n Ingrese la cantidad de alumnos a inscribirse: ");
	scanf("%d",&N);

	for(i=0;i<N;i++){

		printf("\n Matricula: ");
		fflush(stdin);
		gets(Mat[i]);
		fflush(stdin);
		printf("\n Total de creditos del semestre a cursar: ");
		fflush(stdin);
		scanf("%d",&tCreditos[i]);
		fflush(stdin);
		printf("\n Edad: ");
		fflush(stdin);
		scanf("%d",&Edad[i]);
		printf("\n");

		tC[i] = &tCreditos[i];
		Age[i] = &Edad[i];

		if(*Age[i] < 20 && *tC[i] >= 21 && *tC[i] <= 35){
			Total[i] = OPC2 - (OPC2*0.10);
			T[i] = &Total[i];
		}else{
			Total[i] = OPC2;
			T[i] = &Total[i];
			if(*Age[i] > 40 && *tC[i] >= 35){
			    Total[i] = OPC3 - (OPC3*0.05);
			    T[i] = &Total[i];
	     	}else{
			    Total[i] = OPC3;
			    T[i] = &Total[i];
			    if(*Age[i] > 20 && *Age[i] < 40 && *tC[i] <= 20){
			        Total[i] = OPC1 - (OPC1*0.20);
			        T[i] = &Total[i];
		        }else{
			        Total[i] = OPC1;
			        T[i] = &Total[i];
		        }
	        }
	    }
	}
	for(i=0;i<N;i++){

		printf("\n El alumno con la matricula: %s y edad de %d pagara $ %f pesos por un semestre de %d creditos. ",Mat[i],*Age[i],*T[i],*tC[i]);
		printf("\n");

	}
	return 0;
}
