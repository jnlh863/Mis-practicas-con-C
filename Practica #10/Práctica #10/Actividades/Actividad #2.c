/*ACTIVIDAD 2*/
/*Dada la siguiente estructura "Empleado", que contiene los siguientes datos:
a) Nombre
b) Clave del departamento
   1. Nombre del departamento
   2. Numero de empleados que tiene el departamento
   3. Nombre del jefe del departamento
c) Antiguedad del empleado
d) Sueldo del empleado

Desarrollar un programa en C, que permita:
1) Por medio de una función, capturar la información para cada uno de los n empleados.
2) Una vez capturada la información de los n empleados, por medio de una función imprimirlos
3) Dado el nombre de un empleado, imprimir su sueldo, el nombre del departamento en que trabaja 
   y el nombre de su jefe, por medio de una función.
4) Dado el nombre del departamento, imprimir el número de empleados que tiene el departamento 
   y el nombre del empleado que más gana en ese departamento por medio de una función.
5) Para este programa debe manejar estructuras anidadas.
6) Debe definir desde la función principal (main) un menú de opciones de tal manera que en cada 
   opción debe mandar llamar a la función y salir por medio de la opción finalizar, debe validar 
   completamente el menú y en la función de captura debe preguntar si la información que se capturó 
   es correcta o no*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Clave_del_departamento{
	char nom_depa[50];
	int num_emp_depa;
	char nom_jefe_depa[50];
};
struct Empleado{
	char Nombre[50];
	struct Clave_del_departamento info_depa;
	int Antiguedad_del_empleado;
	double Sueldo_del_empleado;
};

int Datos(struct Empleado emp[],int n);
void Imprimir(struct Empleado emp[],int n);
int InfoEmp(struct Empleado emp[],int n);
int InfoDepa(struct Empleado emp[],int n);

int main(){
	int i,n,opcS;
	printf("\n ACTIVIDAD 2.- INFORMACION DE UN EMPLEADO ");
	printf("\n");
	printf("\n Ingrese la cantidad de empleados que tiene la empresa: ");
	scanf("%d",&n);
	printf("\n Ingrese los datos ");
	printf("\n");
	struct Empleado emp[n];
	Datos(emp,n);
	fflush(stdin);
	printf("\n Los datos ingresados son los correctos:\n\t1) SI\n\t2) NO\n\t3) Salir\n\tOpcion elegida: ");
	scanf("%d",&opcS);
    fflush(stdin);
	if(opcS == 1){
	    char opc;
		printf("\n Que desea realizar?:\n\ta) Imprimir los datos\n\tb) Obtener el sueldo de un empleado, el nombre del departamento donde labora, y el nombre de su jefe\n\tc) Obtener el numero de empleados que tiene el departamento y el nombre del empleado que mas gana en dicho departamento\n\td) Finalizar\n\tOpcion elegida: ");
	    scanf("%c",&opc); 
	    switch(opc){
		    case 'a':
			    Imprimir(emp,n);
			    break;
		    case 'b':
			    InfoEmp(emp,n);
			    break;
		    case 'c':
			    InfoDepa(emp,n);
			    break;
			case 'd':
				exit(0);
		    default: ("\n Hubo un error, vuelva a intentarlo");
	   }
	}
	if(opcS == 2){
		printf("\n Intentelo de nuevo ");
		printf("\n");
		system("pause");
		system("cls");
		return main();
	}else{
		if(opcS == 3){
			exit(0);
		}
	}
	return 0;
}
int Datos(struct Empleado emp[],int n){
	int i;
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("\n Nombre del empleado %d: ",i+1);
		gets(emp[i].Nombre);
		fflush(stdin);
		printf("\n Ingrese nombre del departamento: ");
		gets(emp[i].info_depa.nom_depa);
		fflush(stdin);
		printf("\n Numero de empleados de dicho departamento: ");
		scanf("%d",&emp[i].info_depa.num_emp_depa);
		fflush(stdin);
		printf("\n Nombre del jefe de dicho departamento: ");
		gets(emp[i].info_depa.nom_jefe_depa);
		fflush(stdin);
		printf("\n Antiguedad del empleado %d: ",i+1);
		scanf("%d",&emp[i].Antiguedad_del_empleado);
		fflush(stdin);
		printf("\n Sueldo del empleado %d: ",i+1);
		scanf("%lf",&emp[i].Sueldo_del_empleado);
		printf("\n");
	}
	return n;
}
void Imprimir(struct Empleado emp[],int n){
	int i;
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("\n Datos del empleado %d ",i+1);
		printf("\n Nombre del empleado: %s",emp[i].Nombre);
		printf("\n Nombre del departamento donde labora: %s",emp[i].info_depa.nom_depa);
		printf("\n Numero de empleados que laboran en dicho departamento: %d",emp[i].info_depa.num_emp_depa);
		printf("\n Nombre del jefe de dicho departamento: %s",emp[i].info_depa.nom_jefe_depa);
		printf("\n Antiguedad del empleado: %d",emp[i].Antiguedad_del_empleado);
		printf("\n Sueldo: $%.2lf pesos",emp[i].Sueldo_del_empleado);
		printf("\n");
	}
}
int InfoEmp(struct Empleado emp[],int n){
	int i;
	char NombreB[50];
	printf("\n Ingrese el nombre del empleado: ");
	fflush(stdin);
    gets(NombreB);
    fflush(stdin);
	for(i=0;i<n;i++){
		fflush(stdin);
		if(strcmp(NombreB,emp[i].Nombre)==0){
			printf("\n Su sueldo es de: $%.2lf pesos",emp[i].Sueldo_del_empleado);
			printf("\n El nombre del departamento donde labora es: %s",emp[i].info_depa.nom_depa);
			printf("\n El nombre de su jefe es: %s",emp[i].info_depa.nom_jefe_depa);
			break;
		}
	}
	return n;
}
int InfoDepa(struct Empleado emp[],int n){
	int i,ESM;
	float SM=0;
	char nom_depa_B[50];
	printf("\n Ingrese el nombre del departamento: ");
	fflush(stdin);
	gets(nom_depa_B);
	fflush(stdin);
	for(i=0;i<n;i++){
		fflush(stdin);
		if(strcmp(nom_depa_B,emp[i].info_depa.nom_depa)==0){
			printf("\n El numero de trabajadores que laboran en este departamento es de: %d empleados",emp[i].info_depa.num_emp_depa);
			if(emp[i].Sueldo_del_empleado > SM){
				SM = emp[i].Sueldo_del_empleado;
				ESM = i;
			}
			printf("\n El empleado con el mayor sueldo en este departamento es: %s",emp[ESM].Nombre);
			break;
		}
	}
	return n;
}









