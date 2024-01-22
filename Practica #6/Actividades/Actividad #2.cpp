/*ACTIVIDAD 2*/
/*Se tiene un grupo de alumnos pertenecientes a la clase de programación 
estructurada, los datos por cada alumno son: matricula, sexo, edad, estatura, 
peso, color de ojos (1 – azul, 2 – castaño, 3 – otro), color de cabello 
(1 – castaño, 2 – rubio, 3 – otro). Desarrollar un programa en C que proporcione 
los datos de entrada que se indican de cada alumno y proporcione el siguiente 
reporte. Todas las mujeres de cabello rubio y ojos azules que miden entre 1.65 
y 1.75 y que pesen menos de 55 kg, todos los hombres de ojos castaños de más de 
1.70 de estatura y que pesen entre 60 y 70 kgs.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nAlum,mat,edad,peso,coj,ccab,i=0,carH=0,carM=0;
	int sexo;
	float est;
	
	printf("\n         Alumnos de Programacion Estructurada que cumplen ciertas caracteristicas         \n");
	printf("\n Ingrese cantidad de alumnos: ");
	scanf("%d",&nAlum);
	
	do{
		printf("\n Sexo:\n\t1)Femenino\n\t2)Masculino\n\tOpcion seleccionada: ");
	    scanf("%d",&sexo);
	    
		switch(sexo){
			case 1: 
			    printf("\n Ingrese su matricula: ");
		        scanf("%d",&mat);
		        fflush(stdin);
		        printf("\n Edad: ");
		        scanf("%d",&edad);
		        printf("\n Estatura: ");
		        scanf("%f",&est);
		        printf("\n Peso: ");
		        scanf("%d",&peso);
		        fflush(stdin);
		        printf("\n Seleccione que tipo de color tiene:\n\t1)Azul\n\t2)Castanio\n\t3)Otro\n\tOpcion seleccionada: ");
		        scanf("%d",&coj);
		        fflush(stdin);
		        printf("\n Seleccione que tipo de color de cabello tiene:\n\t1)Castanio\n\t2)Rubio\n\t3)Otro\n\tOpcion seleccionada: ");
		        scanf("%d",&ccab);
			    if(ccab == '2' && coj == '1' && est >= 1.65 || est <= 1.75 && peso < 55){
			    	carM = carM + 1;
			    	printf("\n La alumna %d cumple con las caracteristicas",mat);
				}else{
					printf("\n");
					printf("\n La alumna %d no cumple con las caracteristicas requeridas",mat);
				}
			    break;
			case 2:
				printf("\n Ingrese su matricula: ");
		        scanf("%d",&mat);
		        fflush(stdin);
		        printf("\n Edad: ");
		        scanf("%d",&edad);
		        printf("\n Estatura: ");
		        scanf("%f",&est);
		        printf("\n Peso: ");
		        scanf("%d",&peso);
		        fflush(stdin);
		        printf("\n Seleccione que tipo de color tiene:\n\t1)Azul\n\t2)Castanio\n\t3)Otro\n\tOpcion seleccionada: ");
		        scanf("%d",&coj);
		        fflush(stdin);
		        printf("\n Seleccione que tipo de color de cabello tiene:\n\t1)Castanio\n\t2)Rubio\n\t3)Otro\n\tOpcion seleccionada: ");
		        scanf("%d",&ccab);
			    if(coj == '2' && est >= 1.70 && peso >= 60 || peso <= 70){
			    	carH = carH + 1;
			    	printf("\n El alumno %d cumple con las caracteristicas",mat);
				}else{
					printf("\n El alumno %d no cumple con las caracteristicas requeridas",mat);
				}
			    break;
			default: 
			    printf("\n         Seleccion incorrecta >:(         ");
		}
		printf("\n");
		system("pause");
		system("cls");
		i++;
	}while(i<nAlum);
	    printf("\nCuantas mujeres cumplen con las siguientes caracteristicas:\n\tColor de cabello: Rubio\n\tColor de ojos: Azul\n\t");
		printf("Estatura entre 1.65  y 1.75 \n\tPeso menor de 55 kg\n\t%d alumnas", carM);
		printf("\n");
		printf("\nCuantos hombres cumplen con las siguientes caracteristicas:\n\tColor de ojos: Castanio\n\tEstatura mayor a 1.70\n\t");
		printf("Peso entre 60 kg y 70 kg\n\t%d alumnos", carH);
	return 0;
}