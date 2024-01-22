/*ACTIVIDAD 1*/
/*La familia Pérez, realizó un viaje de vacaciones a las islas Caimán, 
entonces necesita llevar un control de sus gastos durante la estancia 
de seis días, ya que no sabe cuánto gastará por día. Desarrollar un
programa en C, para calcular la suma de sus gastos por día, y al final 
de sus vacaciones obtener lo que gasto durante los seis días, imprimir 
el gasto por día y el total gastado.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	int i=1,j,gasto,n;
	float sumdia=0,sumgasto=0;
	
	while(i<7){
		printf("\n          CONTROL DE GASTOS          \n");
		printf("\n Cuantos gastos hizo el dia %d?: ",i);
		scanf("%d",&n);
		for(j=0;j<n;j++){
			printf("\n Cuanto se gasto?: $ ");
		    scanf("%d",&gasto);
		    sumdia = gasto + sumdia; 	
		}
		sumgasto = sumgasto + sumdia;
		printf("\n Usted gasto en el dia %d: $%f pesos",i,sumdia);
	    printf("\n");
		i++;
	}
	printf("\n El total gastado durante estos 6 dias fue de: $%f pesos",sumgasto);
	printf("\n");
	system("pause");
	return 0;
}