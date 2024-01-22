/*ACTIVIDAD 1*/
/*En un arreglo unidimensional de tipo real se tienen almacenadas 
las toneladas mensuales de cereales cosechadas por la compañía agricultora 
ACME durante el año anterior en sus bodegas (realizar la lectura de las 
toneladas de cereales mensuales del año anterior, la agricultora desea 
obtener datos estadísticos de sus cosechas del año anterior. Desarrolla 
un programa en C que permita calcular e imprimir:                                                                                                

a) El promedio anual de toneladas cosechadas.
b) Cuantos meses tuvieron una cosecha superior al promedio anual.
c) Cuál fue la mayor producción.
d) Cuál fue el mes más productivo.*/

#include <stdio.h>

int main(){
	float TMDCC[12],promanual,sumaTMDCC=0; //*TMDCC: Toneladas mensuales de cosecha de cereal; sumaTMDCC: Suma de las toneladas de cosecha por mes*//
	int i,MCS=0,MYP=0,MesMasProd; //*MCS: Cantidad de meses con una cosecha superior al promedio anual;MYP:Mayor produccion;MesMasProd: Mes mas productivo*//
	
	for(i=1;i<13;i++){
		printf("\n Ingrese la cantidad de toneladas de cosecha de cereal del mes %d: ",i);
		scanf("%f",&TMDCC[i]);
	}
	for(i=1;i<13;i++){
		sumaTMDCC = sumaTMDCC + TMDCC[i];	
	}
	promanual = sumaTMDCC/12;
	for(i=1;i<13;i++){
		if(TMDCC[i] > promanual){
			MCS = MCS + 1;
		}
	}
	for(i=1;i<13;i++){
		if(TMDCC[i] > MYP){
			MYP = TMDCC[i];
			MesMasProd = i;
		}	
	}
	printf("\n El promedio anual de toneladas cosechadas de cereal es: %f",promanual);
	printf("\n La cantidad de meses que tuvieron una cosecha superior al promedio anual es: %d",MCS);
	printf("\n La mayor produccion fue de: %d",MYP);
	printf("\n El mes mas productivo es: %d",MesMasProd);
	return 0;
}