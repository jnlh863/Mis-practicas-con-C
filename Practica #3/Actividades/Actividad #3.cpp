/*ACTIVIDAD 3*/
/*Supongamos que la tarifa de una compañía de gas se basa 
en el consumo de acuerdo con la siguiente información: los 
primeros 70 metros cúbicos de gas usado tienen un costo mínimo 
de $500, los siguientes 100 metros cúbicos de gas usado $50 por 
metro cúbico, los siguientes 230 metros cúbicos de gas usado $25 
por metro cúbico, por encima de 400 metros cúbicos de gas usado 
$15 por metro cúbico. Dada la lectura anterior y actual de gas 
en metros cúbicos, calcular el valor de la factura; teniendo en 
cuenta que si la lectura actual es menor a la anterior hay una 
rebaja del 20%, en las lecturas menores de 70 y mayores de 170 
metros cúbicos; además si la lectura actual es igual al 50% de 
la lectura anterior se hará una rebaja del 50% a las lecturas 
mayores de 170 y menores de 400 metros cúbicos. 
Imprimir el valor de la factura.*/

#include <stdio.h>

int main(){
	
	float total,descuento;
	int lecac,lecan;
	printf("\n Introduzca lectura actual: ");
	scanf("%d",&lecac);
	printf("\n Introduzca lectura previa: ");
	scanf("%d",&lecan);
	
	if(lecac == lecan * 0.50){
		if(lecac > 170 && lecac <= 400){
		    total = lecac * 25;
		    descuento = (total * 0.50);
		    total = total - descuento;
		}else{
			if(lecac > 400){
			    total= lecac * 15;
			}   
		}  
	}
	if(lecac<lecan){
		if(lecac < 70){
		total = lecac * 500;
		descuento = (total * 0.20);
		total = total - descuento;
		}else{
			if(lecac > 170 && lecac <= 400){
		        total = lecac * 25;
	        	descuento = (total * 0.20);
		        total = total - descuento;
		}else{
			if(lecac > 400){
				total = lecac * 15;
	        	descuento = (total * 0.20);
		        total = total - descuento;
			}else{
		        if(lecac > 70 || lecac <= 169){
				    total = lecac * 50;
			}  
		  }
		}	
	}
    }
    if(lecac > lecan){
    	if(lecac == 70){
    		total = lecac * 500;
		}else{
			if(lecac > 70 || lecac <= 169){
				total = lecac * 50;
			}else{
				if(lecac >= 170 || lecac <= 400){
					total = lecac * 25;
				}else{
					if(lecac > 400){
						total = lecac * 15;
					}
				}
			}
		}
	}
	printf("\n La factura es de: $%f ",total);   
return 0;
}


















