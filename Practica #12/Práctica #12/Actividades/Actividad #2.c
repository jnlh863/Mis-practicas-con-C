/*ACTIVIDAD 2*/
/*En un instituto de educación superior existen n estudiantes con (n>0), cada uno cursa tres materias
(1001 Matemáticas, 1002 Biología y 1003 Dibujo), y en cada una de ellas se almacena la calificación que obtuvo.
Desarrollar un programa en C que genere tres vectores (matricula del estudiante, clave de la materia y calificación
de la materia, para obtener el promedio general por materia, el promedio de un estudiante y la calificación más
alta por materia. Se imprimirá el promedio general por materia (mostrando la clave de la materia, el promedio de un
estudiante (mostrando la matricula del estudiante) y la calificación más alta por materia (indicando la clave de la
materia).*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char Mat['N'][30];
	char ClaveM['N'][10],ClaveB['N'][10],ClaveD['N'][10];
	float CalM['N'],CalB['N'],CalD['N'];
	int i,N;
	float PromCM,PromCB,PromCD,PromA['N'],CMM=0,CMB=0,CMD=0;
	float *M['N'],*B['N'],*D['N'];
	float sumaCM=0,sumaCB=0,sumaCD=0;

	printf("\n                  Reporte de calificaciones de un Instituto de Educacion Superior              ");
	printf("\n");
	printf("\n Cantidad de alumnos: ");
	scanf("%d",&N);

	for(i=0;i<N;i++){

		printf("\n Matricula[%d]: ",i+1);
		fflush(stdin);
		gets(Mat[i]);

		printf("\n Clave de la materia Matematicas: ");
		fflush(stdin);
		scanf("%s",&ClaveM[i]);
		printf("\n Calificacion: ");
		fflush(stdin);
		scanf("%f",&CalM[i]);

		printf("\n Clave de la materia Biologia: ");
		fflush(stdin);
		scanf("%s",&ClaveB[i]);
		printf("\n Calificacion: ");
		fflush(stdin);
		scanf("%f",&CalB[i]);

		printf("\n Clave de la materia Dibujo: ");
		fflush(stdin);
		scanf("%s",&ClaveD[i]);
		printf("\n Calificacion: ");
		fflush(stdin);
		scanf("%f",&CalD[i]);

		printf("\n");
		printf("\n-------------------------------------------------------------------------------------------");
		printf("\n");

		M[i] = &CalM[i];
		B[i] = &CalB[i];
		D[i] = &CalD[i];

		if(*M[i]>CMM){
			CMM = *M[i];
		}
		if(*B[i]>CMB){
			CMB = *B[i];
		}
		if(*D[i]>CMD){
			CMD = *D[i];
		}

		if(strcmp(ClaveM[i],"1001")==0){
			sumaCM = sumaCM + *M[i];
		}
		if(strcmp(ClaveB[i],"1002")==0){
			sumaCB = sumaCB + *B[i];
		}
		if(strcmp(ClaveD[i],"1003")==0){
			sumaCD = sumaCD + *D[i];
		}else{
		    printf("\n Error. Intente de nuevo !!!");
		    printf("\n");
		    system("pause");
		    system("cls");
		    return main();
		}
		PromA[i] = (*M[i] + *B[i] + *D[i])/3;
		PromCM = sumaCM/N;
	    PromCB = sumaCB/N;
	    PromCD = sumaCD/N;
	}
	printf("\n");
	printf("\n El promedio del alumno con la matricula %s es de %f",Mat[0],PromA[0]);
	printf("\n");
	printf("\n Promedio General en Matematicas[%s]: %f \n Promedio General en Biologia[%s]: %f \n Promedio General en Dibujo[%s]: %f \n",*ClaveM,PromCM,*ClaveB,PromCB,*ClaveD,PromCD);
	printf("\n");
	printf("\n La calificacion mas alta de [%s] es: %f \n La calificacion mas alta de [%s] es: %f \n La calificacion mas alta de [%s] es: %f",*ClaveM,CMM,*ClaveB,CMB,*ClaveD,CMD);
	printf("\n");
	return 0;
}
