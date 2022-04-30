#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
2. Hacer un algoritmo que llene una matriz de `10*10` y determine la posici�n [renglon, columna] del n�mero mayor almacenado en la matriz.
*/

int main(){
	system("color 30");
	
	int filas = 2, columnas = 2;
	int matriz[2][2];
	int mayor = 0, fila_mayor = 0, col_mayor = 0;
	
	printf("Ingrese los valores a la matriz: \n\n");
	for (int fila = 0; fila < filas; fila++){
		for (int columna = 0; columna < columnas; columna++){
			printf("Posici�n [%d][%d]: ", fila, columna);
			scanf("%d", &matriz[fila][columna]);
			
			if (fila == 0 and fila == 0)
				mayor = matriz[fila][columna];
				
			if (matriz[fila][columna] >= mayor){
				mayor = matriz[fila][columna];
				fila_mayor = fila;
				col_mayor = columna;
			}
			
		}
	}
	
	printf("\nLa posici�n del n�mero mayor almacenado en la matriz es de: [%d][%d] \nEl n�mero mayor es: %d", 
		   fila_mayor, col_mayor, matriz[fila_mayor][col_mayor]);
	
	return 0;
}
