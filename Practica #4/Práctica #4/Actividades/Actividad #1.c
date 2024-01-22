/*ACTIVIDAD 1*/
/*Realizar un programa que determine el precio a cobrar por un 
producto seleccionado y la cantidad de producto.El usuario seleccionara 
solo un producto entre el producto A, producto B y producto C. 
El precio unitario del producto A será de $10, del producto B $4 
y del producto C $9. Después el usuario ingresara el número de piezas 
de producto a comprar. Se calculará el costo total en base al producto 
seleccionado y la cantidad de piezas. Si selecciona el producto A y el 
costo total es mayor a 100 se le aplicara un 10% de descuento, si 
selecciona el producto B y la cantidad de producto es mayor a 5 piezas 
se le descontaran $30 y si el producto seleccionado es el C no recibirá 
ningún descuento. Mostrar el producto seleccionado, la cantidad de piezas 
y el costo total.*/

#include <stdio.h>
#define precioA 10
#define precioB 4
#define precioC 9 

int main(){
	
	char producto;
	int cant;
	printf("Seleccione tipo de producto:\n\n\tA)Producto1\n\tB)Producto2\n\tC)Producto3\n\nOpcion seleccionada:");
	scanf("%c",&producto);
	printf("\n");
	printf("Ingrese la cantidad del producto seleccionado: ");
	scanf("%d",&cant);
	float costo_total,descuento;
	
	if(producto == 'A' || producto == 'a'){
		costo_total = cant * precioA;
		if(costo_total > 100){
			descuento = (costo_total * 0.10);
			costo_total = costo_total - descuento;
		}
	}else if(producto == 'B' || producto == 'b'){
		if(cant > 5){
			costo_total = cant * precioB;
			descuento = (costo_total*0.30);
			costo_total = costo_total - descuento; 
		}	
	}else if(producto == 'C' || producto == 'c'){
		costo_total = cant * precioC;
	}else{
		printf("\n Seleccion invalida!!!");
	}
	printf("\n\tProducto seleccionado: %c\n\tCantidad de piezas de dicho producto: %d\n\tCosto total: $%f",producto,cant,costo_total);
	return 0;		
}