#include <iostream>
#include <stdlib.h>
using namespace std;

/**
9. Encontrar el mayor valor de un conjunto de n numeros dados
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad;
	float numero, mayor;
	
	cout << "Ingrese la cantidad de n�mero a ingresar: ";
	cin >> cantidad;
	
	for (int i = 1; i <= cantidad; i++){
		cout << "Ingrese el " << i << " n�mero: ";
		cin >> numero;
		
		if (i == 1){
			mayor = numero;
		}
		
		if (numero >= mayor){
			mayor = numero;
		}
		
	}
	
	cout << "\nEl n�mero mayor del conjunto de n�meros es: " << mayor;
	
	return 0;
}

