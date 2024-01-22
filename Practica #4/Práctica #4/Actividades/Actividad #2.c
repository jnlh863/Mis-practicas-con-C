/*ACTIVIDAD 2*/
/*Desarrollar un programa capaz de calcular el total a pagar en una 
visita al cine dependiendo del tipo de sala seleccionada, la edad del
cliente, sus compras en la dulcería y si cuenta con membresía. Las 
opciones para tipo de sala serán normal, premium y 3D, donde el precio 
por un boleto de cada sala es de $35, $50 y $60 respectivamente. Si la 
edad del cliente es menor a 18 o mayor a 40 se le aplicara un descuento 
del boleto de $5. El cliente puede elegir comprar palomitas o no, si 
elige comprar palomitas podrá escoger entre chicas $40, medianas $50 
o grandes $60. Si el cliente cuenta con membresía se le descontaran $5 
del total. Imprimir en pantalla un reporte con la descripción y los 
montos por cada opción seleccionada y el total de la compra.*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define precioboletoNormal 35
#define precioboletoPremium 50
#define precioboleto3D 60
#define palomitasCH 40
#define palomitasMED 50
#define palomitasGRAN 60

int main(){
	float total;
	int edad,cantb,sala,palomitas,tpalomitas,membresia;
	printf("Seleccione tipo de sala:\n\n\t1)Normal\n\t2)Premium\n\t3)3D\n\t4)Salir\n\tOpcion seleccionada: ");
	scanf("%d",&sala);
	printf("\n");
	printf("Ingrese cantidad de boletos: ");
	scanf("%d",&cantb);
	printf("\n");
	printf("Introduzca su edad: ");
	scanf("%d",&edad);
	printf("\n");
	
	switch(sala){
		case 1: 
		printf("Desea comprar palomitas?\n\t1)Si\n\t2)No\n\nOpcion selecionada: ");
	    scanf("%d",&palomitas);
	    printf("\n");
	    printf("Elija tipo de palomitas:\n\t1)Chicas\n\t2)Medianas\n\t3)Grandes\n\t4)Salir\n\tOpcion selccionada:");
	    scanf("%d",&tpalomitas);
	    printf("\n");
	    system("cls");
		if(palomitas == 1){
			if(tpalomitas == 1){
			palomitas = palomitasCH;
			total = (cantb * precioboletoNormal) + palomitas;
		}else{
			if(tpalomitas == 2){
				palomitas = palomitasMED;
				total = (cantb * precioboletoNormal) + palomitas;
			}else{
				if(tpalomitas == 3){
					palomitas = palomitasGRAN;
					total = (cantb * precioboletoNormal)+ palomitas;	
				}else{
					if(tpalomitas == 4){
						printf("Salir");
                        exit(0);
					}		
				}
			}
		}
		if(edad < 18 || edad > 40){
			total = cantb*(precioboletoNormal - 5) + palomitas;
		}else{
			total = (cantb * precioboletoNormal) + palomitas;
		}
		printf("Cuenta con una membresia?\n\t1)Si\n\t2)No\n\nOpcion seleccionada: ");
	    scanf("%d",&membresia);
     	system("cls");
		if(membresia == 1){
			total = total - 5;
		}else{
			total = total;
		}
	    printf("\n\tSala seleccionada: %d\n\tTipo de palomitas: %d\n\tCantidad de boletos: %d\n\tMembresia: %d\n\tEdad: %d\n\tEl total a pagar es de: $%f",
			sala,tpalomitas,cantb,membresia,edad,total);	
		}else{
			if(edad < 18 || edad > 40){
				total = cantb*(precioboletoNormal - 5);	
			}else{
				total = (cantb * precioboletoNormal);
			}
			if(membresia == 1){
				total = total - 5;
			}else{
				total = (cantb * precioboletoNormal);
			}
		printf("\n\tSala seleccionada: %d\n\tCantidad de boletos: %d\n\tMembresia: %d\n\tEdad: %d\n\tEl total a pagar es de: $%f",
			sala,cantb,membresia,edad,total);
		} 	
		break;
		case 2:
		printf("Desea comprar palomitas?\n\t1)Si\n\t2)No\n\nOpcion selecionada: ");
	    scanf("%d",&palomitas);
	    printf("\n");
	    printf("Elija tipo de palomitas:\n\t1)Chicas\n\t2)Medianas\n\t3)Grandes\n\t4)Ninguna de las anteriores\n\tOpcion selccionada:");
	    scanf("%d",&tpalomitas);
	    printf("\n");
	    system("cls");
		if(palomitas == 1){
			if(tpalomitas == 1){
			palomitas = palomitasCH;
			total = (cantb * precioboletoPremium) + palomitas;
		}else{
			if(tpalomitas == 2){
				palomitas = palomitasMED;
				total = (cantb * precioboletoPremium) + palomitas;
			}else{
				if(tpalomitas == 3){
					palomitas = palomitasGRAN;
					total = (cantb * precioboletoPremium)+ palomitas;	
				}else{
					if(tpalomitas == 4){
						printf("Salir");
                        exit(0);
					}		
				}
			}
		}
		if(edad < 18 || edad > 40){
			total = cantb*(precioboletoPremium - 5) + palomitas;
		}else{
			total = (cantb * precioboletoPremium) + palomitas;
		}
		printf("Cuenta con una membresia?\n\t1)Si\n\t2)No\n\nOpcion seleccionada: ");
	    scanf("%d",&membresia);
     	system("cls");
		if(membresia == 1){
			total = total - 5;
		}else{
			total = total;
		}
		printf("\n\tSala seleccionada: %d\n\tTipo de palomitas: %d\n\tCantidad de boletos: %d\n\tMembresia: %d\n\tEdad: %d\n\tEl total a pagar es de: $%f",
			sala,tpalomitas,cantb,membresia,edad,total);	
		}else{
			if(edad < 18 || edad > 40){
				total = cantb*(precioboletoPremium - 5);	
			}else{
				total = (cantb * precioboletoPremium);
			}
			if(membresia == 1){
				total = total - 5;
			}else{
				total = (cantb * precioboletoPremium);
			}
		printf("\n\tSala seleccionada: %d\n\tCantidad de boletos: %d\n\tMembresia: %d\n\tEdad: %d\n\tEl total a pagar es de: $%f",
			sala,cantb,membresia,edad,total);	
		}
		break;
		case 3:
			printf("Desea comprar palomitas?\n\t1)Si\n\t2)No\n\nOpcion selecionada: ");
	        scanf("%d",&palomitas);
	        printf("\n");
	        printf("Elija tipo de palomitas:\n\t1)Chicas\n\t2)Medianas\n\t3)Grandes\n\t4)Ninguna de las anteriores\n\tOpcion selccionada:");
	        scanf("%d",&tpalomitas);
	        printf("\n");
	        system("cls");
			if(palomitas == 1){
			if(tpalomitas == 1){
			palomitas = palomitasCH;
			total = (cantb * precioboleto3D) + palomitas;
		}else{
			if(tpalomitas == 2){
				palomitas = palomitasMED;
				total = (cantb * precioboleto3D) + palomitas;
			}else{
				if(tpalomitas == 3){
					palomitas = palomitasGRAN;
					total = (cantb * precioboleto3D)+ palomitas;	
				}else{
					if(tpalomitas == 4){
						printf("Salir");
                        exit(0);
					}	
				}
			}
		}
		if(edad < 18 || edad > 40){
			total = cantb*(precioboleto3D - 5) + palomitas;
		}else{
			total = (cantb * precioboleto3D) + palomitas;
		}
		printf("Cuenta con una membresia?\n\t1)Si\n\t2)No\n\nOpcion seleccionada: ");
	    scanf("%d",&membresia);
     	system("cls");
		if(membresia == 1){
			total = total - 5;
		}else{
			total = total;
		}
		printf("\n\tSala seleccionada: %d\n\tTipo de palomitas: %d\n\tCantidad de boletos: %d\n\tMembresia: %d\n\tEdad: %d\n\tEl total a pagar es de: $%f",
			sala,tpalomitas,cantb,membresia,edad,total);	
		}else{
			if(edad < 18 || edad > 40){
				total = cantb*(precioboleto3D - 5);	
			}else{
				total = (cantb * precioboleto3D);
			}
			if(membresia == 1){
				total = total - 5;
			}else{
				total = (cantb * precioboleto3D);
			}
		printf("\n\tSala seleccionada: %d\n\tCantidad de boletos: %d\n\tMembresia: %d\n\tEdad: %d\n\tEl total a pagar es de: $%f",
			sala,cantb,membresia,edad,total);
		break;
		case 4:
            printf("Salir");
            exit(0);
		default: printf("!!!Seleccion incorrecta!!!");	
    }	
return 0; 	
}
}