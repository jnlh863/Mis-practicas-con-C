/*ACTIVIDAD 2*/
/*Dado un arreglo numérico en dos dimensiones (m x n), donde m == n, 
para datos de tipo entero, desarrollar un programa en C el cual tome 
cada elemento de la fila y si es par almacenarlo en un vector A ordenado 
ascendentemente, si es impar almacenarlo en otro vector B de manera 
descendentemente, además indique cual es el elemento mayor de ambos 
(pares e impares). Se imprimirá la matriz de entrada, el vector A, el vector B 
y el elemento mayor.*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){
	int MAT['F']['C'],ParA['a'],ImparB['b'],i,j,a=0,b=0,mayorP=0,mayorImp=0,aux,F,C;
	
	printf("\n Ingrese la cantidad de filas: ");
	scanf("%d",&F);
	printf("\n Ingrese la cantidad de columnas: ");
	scanf("%d",&C);
	
	if(F==C){
		
		//Ingreso de los elementos de la matriz//
		for(i=0;i<F;i++){
			for(j=0;j<C;j++){
				printf("\n Ingrese un numero para la posicion [%d][%d]: ",i,j);
				scanf("%d",&MAT[i][j]);
			}
		}
		
		//Impresion de la matriz//
		printf("\n");
		for(i=0;i<F;i++){
			for(j=0;j<C;j++){
				printf(" [%d]",MAT[i][j]);
			}
			printf("\n");
		}
		
		//Vectores para los numeros pares(Vector ParA) e impares(Vector ImparB)//
		for(i=0;i<F;i++){
			for(j=0;j<C;j++){
				if(MAT[i][j]%2==0){
					ParA[a] = MAT[i][j];
					a++;
				}else{
					ImparB[b] = MAT[i][j];
					b++;
				}
			}
		}
		
		//Impresion de los vectores ParA(ascendente) e ImparB(descendente)// 
		for(i=0;i<(a-1);i++){
			for(j=i+1;j<a;j++){
				if(ParA[i]>ParA[j]){
		  	        aux = ParA[i];
		  	        ParA[i] = ParA[j];
		  	        ParA[j] = aux;
		        }	
			}		
		}
		printf("\n Vector A en forma ascendente \n");
		for(i=0;i<a;i++){
			printf("\t ParesA[%d]: %d",i,ParA[i]);
		}
		printf("\n");
		for(i=0;i<(b-1);i++){
		    for(j=i+1;j<b;j++){
		    	if(ImparB[i]<ImparB[j]){
		   	        aux = ImparB[j];
		   	        ImparB[j] = ImparB[i];
		   	        ImparB[i] = aux;
		         }	
			}				
		}
		printf("\n Vector B en forma descendente \n");
		for(i=0;i<b;i++){	
			printf("\t ImparesB[%d]: %d",i,ImparB[i]);			
		}
		printf("\n");
		
		//Determinacion del elemento mayor del vector ParA//
		for(i=0;i<a;i++){
			if(ParA[i]>mayorP){
				mayorP = ParA[i];
			}else{
				continue;
			}			
		}
		printf("\n");
		printf("\n El elemento mayor del vector A (ParA) es: %d",mayorP);
		printf("\n");
		
		//Determinacion del elemento mayor del vector ImparB//
		for(i=b;i>=0;i--){	
			if(ImparB[i]>mayorImp){
				mayorImp = ImparB[i];
			}else{
				continue;
			}		
		}
		printf("\n");
		printf("\n El elemento mayor del vector B (ImparB) es: %d",mayorImp);
		printf("\n");
		
	}else{
		printf("\n Vuelva a intentarlo; debe ser la misma cantidad de filas y columnas");
	}
	return 0;
}