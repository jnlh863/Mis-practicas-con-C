/*ACTIVIDAD 2*/
/*Desarrolla un programa en C, de tal manera que se ingresaran 2 
números enteros, así permita realizar las siguientes acciones: si 
ambos números son pares se multiplicaran entre sí, si ambos números 
son impares, mostrar la raíz de cada uno, si uno es impar 
y otro es par, se mostrara la resta del mayor y el menor ingresado, 
y si ambos números son idénticos, se mandara un mensaje de error. 
Se imprimirá cada uno de los casos anteriores.*/

#include <stdio.h>
#include <math.h>

int main(){
	int num1, num2;
	printf("\n Introduzca un primer numero: ");
	scanf("%d",&num1);
	printf("\n Introduzca un segundo numero: ");
	scanf("%d",&num2);
	
	if(num1 == num2){
		printf("\n Hubo un error, verifique que sean numeros distintos!!!");
	}else{
		if(num1%2==0 && num2%2==0){
		int newnum;
		newnum = num1*num2;
		printf("\n Como %d y %d son pares, el producto entre ellos es: %d",num1,num2,newnum);
	}else{
		if(num1%2>0 && num2%2>0){
			float rnum1;
			rnum1 = sqrt(num1);
			float rnum2;
			rnum2 = sqrt(num2);
			printf("\n Como %d y %d son impares, la raiz de %d es %f y la raiz de %d es %f",num1,num2,num1,rnum1,num2,rnum2);
		}
	}
	if(num1%2==0 && num2%2>0 || num1%2>0 && num2%2==0){
		if(num1>num2){
	    int resta;
		resta = num1 - num2;
		printf("\n Como un numero es par y otro impar, su resta da %d",resta);
	}else{
		int resta;
		resta = num2 - num1;
		printf("\n Como un numero es par y otro impar, su resta da %d",resta);
	    }		
	  }
    }
return 0;	
}
