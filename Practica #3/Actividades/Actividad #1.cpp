/*ACTIVIDAD 1*/
/*Desarrollar un programa en C, en el cual un cliente del banco ACME, 
desea saber si esta excedido en su crédito, se ingresara su número de cliente, 
su saldo inicial, el límite de crédito, cantidad que gasto y cantidad 
depositada en ese mes, imprimir e indicar si se ha excedido o no el límite 
de crédito del cliente (incluyendo la cantidad).*/ 

#include <stdio.h>

int main(){
	
	int numdecliente;
	printf("\n Introduzca su numero de cliente: ");
	scanf("%d",&numdecliente);
	
	float SI;
	printf("\n Introduzca saldo inicial: ");
	scanf("%f",&SI);
	
	float LimdeCredito;
	printf("\n Introduzca el limite de credito: ");
	scanf("%f",&LimdeCredito);
	
	float cantdegasto;
	printf("\n Introduzca cantidad que se gasto: ");
	scanf("%f",&cantdegasto);
	
	float cantdepositada;
	printf("\n Introduzca la cantidad que se deposito este mes: ");
	scanf("%f",&cantdepositada);
	
	float Saldo;
	Saldo = SI + cantdepositada;
	
	if(cantdegasto < Saldo){
		if(cantdegasto < LimdeCredito){
		printf("\n El usuario %d gasto $%f, por lo que no se ha excedido del limite de credito de %f", 
		numdecliente, cantdegasto, LimdeCredito);
	}
	}
	if(cantdegasto > Saldo){
		if(cantdegasto > LimdeCredito){
		float LE;
		LE = cantdegasto - LimdeCredito;
		printf("\n El usuario %d gasto $%f, por lo que se ha excedido del limite de credito por $%f", 
		numdecliente, cantdegasto, LE);	
		}	
	}
return 0;
}
