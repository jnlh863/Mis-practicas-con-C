/*ACTIVIDAD 3*/
/*Dado n cadenas de caracteres (char cadenas [´  ´][30];), de longitud máxima 
30 caracteres cada cadena, desarrollar un programa en C, el cual lea cada cadena 
de caracteres (puede ser cualquier frase o enunciado) y obtenga el número de 
palabras que tiene cada cadena y determinara cual cadena de las n que introduzca 
tiene el mayor número de palabras.*/
 
#include <stdio.h>
#include <string.h>

int main(){
	
	int PC['n'],T,n,i,j,P,CM,PCDCM=0;
	char CAD['n'][30];
	printf("\n Ingrese la cantidad de cadenas que escribira: ");
	scanf("%d",&n);
	fflush(stdin);
	
	for(i=0;i<n;i++){
		printf("\n Ingrese la cadena_%d: ",i+1);
		gets(CAD[i]);
		fflush(stdin);
    }
    for(i=0;i<n;i++){
    	fflush(stdin);
    	P = 0;
		T = strlen(CAD[i]);
		for(j=0;j<T;j++){
			if(CAD[i][j] == ' '){
				P = P + 1;	
			}	
		}
		PC[i] = P + 1;		
	}
	for(i=0;i<n;i++){
		if(PC[i] > PCDCM){
		    PCDCM = PC[i];
		    CM = i;   
		}		
	}
	printf("\n La cadena de caracteres con mayor cantidad de palabras es: ");
	puts(CAD[CM]);
	printf("\n La cantidad de palabras de esta cadena es de: %d",PCDCM);
	return 0;
}