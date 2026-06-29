
#ifndef ARREGLOS_H
#define ARREGLOS_H

#define CUADRADO(x) ((x)*(x))

//#define PI 3,1416

#define DEBUG

int sumaArreglo(int arr[], int n);
int maximo(int arr[], int n);
void cuadradoArreglos(int arr [], int n);
void imprimirArreglo(int arr[], int n);
int BusquedaLineal(int arr[], int n, int objetivo);
int busquedaBinariaIterativa (int arr[], int n, int objetivo);
int busquedaBinariaRecursiva(int arr[], int n, int objetivo, int inicio, int fin);

void bubbleSort ( int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);

void merge(int arr[], int inicio, int mit, int fin);
void mergeSort(int arr[], int inicio, int fin);

void intercambiar(int &a, int &b);
int particion(int arr[], int inicio, int fin);
void quickSort (int arr[], int inicio, int fin);
#endif
