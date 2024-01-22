/*ACTIVIDAD 1*/
/*En una empresa de taxis se desea registrar la información de los n servicios 
ofrecidos (carreras) por sus taxis a los clientes de la empresa, existen 5 taxis, 
dada la siguiente información: código del taxi, clave del cliente, tipo de servicio 
y costo del servicio.
Desarrollar un programa en C para el cual:
a)	Por medio de una función realizar la entrada de los datos.
b)	Por medio de una función mandar imprimir la información leída.
c)	Por medio de una función calcular e imprimir el total producido ($) por 
    cada taxi.
d)	Por medio de una función determinar cual es el servicio que más se usa, 
    se imprimirá (por ejemplo, 02 Normal se usó 7 veces).
e)	Por medio de una función determine que cliente pagó más (imprimir clave y pago).*/
 
#include <stdio.h>
#include <stdlib.h>

int Entrada(int nSO);
int Imprimir(int nSO);
float TP(int CT[],float CS[],int nSO);
int SMU(int TS[],int nSO);
int CPM(char CCL[][15],float CS[],int nSO);

int main(){
	int nSO;
	printf("\n ACTIVIDAD 1.- REGISTRO DE n SERVICIOS OFRECIDOS POR UNA EMPRESA DE TAXIS ");
	printf("\n");
	printf("\n Ingrese la cantidad de servicios ofrecidos: ");
	scanf("%d",&nSO);
	Entrada(nSO);
	Imprimir(nSO);
	return 0;
}
int Entrada(int nSO){
	int i,j,TS['i'],CT['i'];
	float CS['i'];
	char CCL['i'][15];
	for(i=0;i<nSO;i++){
		printf("\n Cliente %d ",i+1);
		printf("\n");
		fflush(stdin);
		printf("\n Clave del cliente: ");
		fflush(stdin);
		scanf("%s",CCL[i]);
		printf("\n Codigo de taxi:\n\t1) 01\n\t2) 02\n\t3) 03\n\t4) 04\n\t5) 05\n\tOpcion elegida: ");
		fflush(stdin);
		scanf("%d",&CT[i]);
		fflush(stdin);
		printf("\n Tipo de servicio:\n\t01)Puerta a puerta\n\t02)Normal\n\t03)Especial\n\tOpcion elegida: ");
		fflush(stdin);
		scanf("%d",&TS[i]);
		fflush(stdin);
		printf("\n Costo del servicio: ");  
		fflush(stdin);
		scanf("%f",&CS[i]);
		printf("\n Oprima ENTER para continuar con el registro ");
		printf("\n");
		system("pause");
		system("cls");
	}
	TP(CT,CS,nSO);
	printf("\n");
	SMU(TS,nSO);
	printf("\n");
	CPM(CCL,CS,nSO);
	printf("\n");
	return nSO;
}
int Imprimir(int nSO){
	int i,j,TS['i'],CT['i'];
	float CS['i'];
	char CCL['i'][15];
	printf("\n REGISTRO DE SERVICIOS OFRECIDOS ");
	printf("\n");
	printf("\n      CT");
	printf("\t       CCL");
	printf("\t      TS");
	printf("\t          CS");
	printf("\n");
	for(i=0;i<nSO;i++){
	    printf("\n     [%d]",CT[i]);
		printf("\t     [%s]",CCL[i]);
		printf("\t     [%d]",TS[i]);
		printf("\t     [%f]",CS[i]);
	}
	printf("\n");
	return nSO;
}
float TP(int CT[],float CS[],int nSO){
	int i;
	float TP01=0,TP02=0,TP03=0,TP04=0,TP05=0;
	for(i=0;i<nSO;i++){
		if(CT[i] == 1){
		    TP01 = TP01 + CS[i];
		}else if(CT[i] == 2){
		    TP02 = TP02 + CS[i];
		}else if(CT[i] == 3){
		    TP03 = TP03 + CS[i];
		}else if(CT[i] == 4){
		    TP04 = TP04 + CS[i];
		}else if(CT[i] == 5){
		    TP05 = TP05 + CS[i];
		}else{
			printf("\n Seleccion inexistente, hubo una eleccion erronea, vuelva a intentarlo ");
			printf("\n");
			return main();
		}
	}
	printf("\n TOTAL PRODUCIDO POR CADA TAXI ($) ");
	printf("\n");
	printf("\n Total producido por el taxi 01 fue de: $%f pesos ",TP01);
	printf("\n");
	printf("\n Total producido por el taxi 02 fue de: $%f pesos ",TP02);
	printf("\n");
	printf("\n Total producido por el taxi 03 fue de: $%f pesos ",TP03);
	printf("\n");
	printf("\n Total producido por el taxi 04 fue de: $%f pesos ",TP04);
	printf("\n");
	printf("\n Total producido por el taxi 05 fue de: $%f pesos ",TP05);
	printf("\n----------------------------------------------------------------------------------");
	return nSO;
} 
int SMU(int TS[],int nSO){
	int i,CV01=0,CV02=0,CV03=0;
	printf("\n SERVICIO MAS USADO ");
	printf("\n");
	for(i=0;i<nSO;i++){
		if(TS[i] == 01){
			CV01++;
		}else if(TS[i] == 02){
			CV02++;
		}else if(TS[i] == 03){
			CV03++;
		}else{
			printf("\n Seleccion Invalida, salga y vuelva a intentarlo ");
			exit(0);
		}		
	}
	if(CV01>CV02 && CV01>CV03){
		printf("\n El servicio 01 Puerta a puerta se uso %d veces",CV01);
	}else if(CV02>CV01 && CV02>CV03){
		printf("\n El servicio 02 Normal se uso %d veces",CV02);
	}else if(CV03>CV01 && CV03>CV02){
		printf("\n El servicio 03 Especial se uso %d veces",CV03);
	}else{
		printf("\n Datos insuficientes. No se puede hacer la comparacion.");
	}
	printf("\n----------------------------------------------------------------------------------");
	return nSO;
}
int CPM(char CCL[][15],float CS[],int nSO){
	int i,CPM;
	float P=0;
	for(i=0;i<nSO;i++){
		if(CS[i] > P){
			P = CS[i];
			CPM = i;
		}
	}
	printf("\n El cliente que pago mas con la cantidad de $ %f pesos fue: ",P);
	puts(CCL[CPM]);
	printf("\n----------------------------------------------------------------------------------");
	return nSO;
}
