#include <iostream>
//======================
#include "arreglos.h"
using namespace std;

//en bibliotecas comunmente se trabaja con varios archivos, y el int main se deja libre

int main() {
	int numeros [] = {5,8,10,15,20,32};
	int arreglo [] = {10, 12,11, 4, 8};
	const double euler= 2.7182;
	
	//PI = 3;
	
//	cout << "Suma de arreglos: "<< sumaArreglo(numeros, 5) << endl; 
//	cout << "Maximo del arreglo: "<< maximo(numeros, 5) << endl; 
//	cout << "Cuadradop del arreglo:  "<< endl; 
//	cuadradoArreglos(numeros,5);
//	imprimirArreglo(numeros,5);
//	//cout << "Valor de PI: "<< PI << endl; 
//	cout << "Valor de euler: "<< euler << endl; 

	cout <<"Elemento encontrado en la posicion: " << BusquedaLineal(numeros, 6, 20)<< endl;
	cout <<"Elemento encontrado en la posicion: " << busquedaBinariaIterativa(numeros, 6, 15)<< endl;
	cout <<"Elemento encontrado en la posicion: " << busquedaBinariaRecursiva(numeros, 6, 20, 0, 5)<< endl;	//recomendada 

//	cout <<"arreglo desordenado " << endl;
//	imprimirArreglo (arreglo, 5);
	
//	bubbleSort(arreglo, 5);
	
//	cout <<"arreglo ordenado " << endl;
//	imprimirArreglo (arreglo, 5);
	
//	cout <<"arreglo desordenado " << endl;
//	imprimirArreglo (arreglo, 5);
//	
//	selectionSort(arreglo, 5);
//	
//	cout <<"arreglo ordenado " << endl;
//	imprimirArreglo (arreglo, 5);
		
//===========================================

//	cout <<"arreglo desordenado " << endl;
//	imprimirArreglo (arreglo, 5);
//	
//	mergeSort(arreglo, 0, 4);
//	
//	cout <<"arreglo ordenado " << endl;
//	imprimirArreglo (arreglo, 5);

	
//===========================================

	cout <<"arreglo desordenado " << endl;
	imprimirArreglo (arreglo, 5);
	
	quickSort(arreglo, 0, 4);
	
	cout <<"arreglo ordenado " << endl;
	imprimirArreglo (arreglo, 5);
	
	return 0;
	
}

void ComplejidadConstante (int arr[]){
	// complejidad O(3)
	arr[0] += arr [1];
	arr[1] += arr [2];
	arr[2] += arr [3];
}


