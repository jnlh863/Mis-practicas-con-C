/*ACTIVIDAD 1*/
/*Dado n números enteros, desarrollar un programa en C, 
de tal manera que muestre la suma de los múltiplos de 2, 
la suma de los múltiplos de 3 y la suma de los múltiplos de ambos (2 y 3).*/

#include <stdio.h>
int main (){
	int sumaM2=0,sumaM3=0,sumaM2M3,sumaNOM23=0,i;
	int num;
	
	for(i=0;i<10;i++){
		printf("\n Ingrese un numero: ");
		scanf("%d",&num);
		if(num % 2 == 0){
			sumaM2 = sumaM2 + num;
		}
		if(num % 3 == 0){
			sumaM3 = sumaM3 + num;
		}else{
			if(num % 2 !=0 && num % 3 !=0){
				sumaNOM23 = sumaNOM23 + num;
			}	
		}
		sumaM2M3 = sumaM2 + sumaM3;
	}
	printf("\n La suma de los multiplos de 2 es: %d",sumaM2);
	printf("\n La suma de los multiplos de 3 es: %d",sumaM3);
	printf("\n La suma de los numeros que no son multiplos de 2 ni de 3 es de: %d",sumaNOM23);
	printf("\n La suma de los multiplos de 2 y 3 son: %d",sumaM2M3);
	return 0;
}