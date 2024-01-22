/*ACTIVIDAD 1*/
/*Dado un arreglo numérico en dos dimensiones (m x n), donde m == n, 
para datos de tipo entero, desarrollar un programa en C el cual se tomen 
los elementos de las esquinas y los almacenes en un vector, considerando 
que el recorrido es por hilera, además muestres el valor que se encuentra 
en el centro de la matriz, si el orden de la matriz es impar entonces tiene 
centro, si es de orden de la matriz es par vamos a considerar que no tiene 
centro y se emite el mensaje no tiene centro. Se imprimirá la matriz de entrada, 
el vector con los elementos de las esquinas y el valor central si tiene y si 
no el mensaje.*/  

#include <stdio.h>

int main(){
	int MAT ['F']['C'],Esq[4],i,j,a,F,C,valorcentro;
	
	printf("\n Ingrese la cantidad de filas: ");
	scanf("%d",&F);
	printf("\n Ingrese la cantidad de columnas: ");
	scanf("%d",&C);
	
	if(F == C){
		for(i=0;i<F;i++){
			for(j=0;j<C;j++){
				printf("\n Ingrese un numero para la posicion [%d][%d]: ",i,j);
				scanf("%d",&MAT[i][j]);
			}
		}
		printf("\n");
		for(i=0;i<F;i++){
			for(j=0;j<C;j++){
				printf(" [%d]",MAT[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for(i=0;i<F;i++){
			for(j=0;j<C;j++){
				if(i==0 && j==0){	
					Esq[0] = MAT[i][j];
			    }else if(i==0 && j==(C-1)){
			        Esq[1] = MAT[i][j];
		    	}else if(i==(F-1) && j==0){
			        Esq[2] = MAT[i][j];
			    }else if(i==(F-1) && j==(C-1)){
		 	        Esq[3] = MAT[i][j];
		        }		
		    } 
	    }
	    printf("\n");
		for(a=0;a<4;a++){
		    printf("\tPosicion[%d]: %d\t",a,Esq[a]);
	    }
	    printf("\n");
		if((F=C)%2==1){
			for(i=0;i<F;i++){
			    for(j=0;j<C;j++){
			    	if(i == (F-2) && j == (C-2)){
			    		valorcentro = MAT[i][j];
					}
			    }
		    }
		    printf("\n");
		    printf("\n                     El elemento que esta en el centro de la matriz es: %d                   ",valorcentro);
		    printf("\n");
		}else{
			if((F=C)%2==0){
				printf("\n");
				printf("\n                                   No tiene centro esta matriz                               ");
				printf("\n");
			}
		}		
	}else{
		printf("\n Vuelva a intentarlo; debe ser la misma cantidad de filas y columnas");
	}
	return 0; 
}