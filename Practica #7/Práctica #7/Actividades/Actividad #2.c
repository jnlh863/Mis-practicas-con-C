/*ACTIVIDAD 2*/
/*La empresa ACME requiere controlar la existencia de n productos de tipo entero, 
los cuales se almacenan en un arreglo numérico en una dimensión (vector A), 
mientras que los pedidos de los clientes de estos productos se almacenan en un 
arreglo en una dimensión (vector B). Se requiere generar un tercer arreglo en una 
dimensión (vector C) con base a la información anterior que represente lo que se 
requiere comprar para mantener el stock de inventario, para esto se considera lo 
siguiente: si los valores correspondientes de los vectores A y B son iguales se 
almacena este mismo valor, si el valor del vector B es mayor que el del vector A 
se almacena el doble de la diferencia entre B y A, si se da el caso de que el de 
A es mayor que el de B, se almacena el de B. Desarrollar un programa en C que lea 
la información de los vectores A y B y realice los cálculos que se solicitan 
almacenándolos en el vector C, imprimir los vectores A, B, y C.

Nota. - Considere que la longitud de los vectores A y B deben tener la misma longitud 
de lo contrario emitir un mensaje no cumple con la igualdad y finalizar el programa, 
además debe validar la entrada de los n datos para los vectores A y B, es decir no 
permite aceptar datos que sean menores o iguales que cero.*/   

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int A['n'],B['N'],C['n'],i,n,N;
	printf("\n                    EMPRESA ACME                   \n");
	printf("\n");
	printf("\n Ingrese la cantidad de productos existentes: ");
	scanf("%d",&n);
	printf("\n Ingrese la cantidad de pedidos: ");
	scanf("%d",&N);
	
	if(n == N){
		for(i=0;i<n;i++){
		   printf("\n Ingrese cantidad del producto %d: ",i);
		   scanf("%d",&A[i]);
		   if(A[i]>0){
		   	printf("\n");
		   	system("pause");
		   }else{
		   	  printf("\n");
			  printf("\n Intentelo de nuevo, la cantidad no debe ser menor o igual que cero");
			  printf("\n");
			  system("pause");
			  system("cls");
			  for(i=0;i<n;i++){
			     printf("\n Ingrese cantidad del producto %d: ",i);
		         scanf("%d",&A[i]);
		      }
		   }
		   fflush(stdin);
		   printf("\n Ingrese cantidad de pedidos del producto %d: ",i);
		   scanf("%d",&B[i]);
		   if(B[i]>0){
		   	printf("\n");
		   	system("pause");
		   }else{
		   	  printf("\n");
			  printf("\n Intentelo de nuevo, la cantidad no debe ser menor o igual que cero");
			  printf("\n");
			  system("pause");
			  system("cls");
			  for(i=0;i<n;i++){
			     printf("\n Ingrese cantidad del producto %d: ",i);
		         scanf("%d",&A[i]);
		      }
		   }     
	    }
	    for(i=0;i<n;i++){
		    if(A[i] == B[i]){
		   	    C[i] = A[i];
            }else if(B[i] > A[i]){
		   	        C[i] = 2*(B[i] - A[i]);
            }else if(A[i] > B[i]){
		   	        C[i] = B[i];
			}
		}
	    for(i=0;i<n;i++){
			printf("\n           Vector A[%d]: %d\t           Vector B[%d]: %d\t           Vector C[%d]: %d",i,A[i],i,B[i],i,C[i]);
			printf("\n");
		}		
    }else{
    	printf("\n La longitud del vector A y B no son los mismos \a");
        exit(0);
	}
	return 0;
}

