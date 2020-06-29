//insertar elementos en la pila por Ariel Josue Navarrete Garcia
#include<iostream>
#include<conio.h>
#include<stdlib.h> //new
using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int); //Prototipo

int main(){
	Nodo *Pila=NULL;
	int n1,n2;
	
	cout<<"ingrese un numero: "; cin>>n1;
	agregarPila(Pila,n1);
	
	cout<<"ingrese un segundo numero: "; cin>>n2;
	agregarPila(Pila,n2);
	
	
	getch();
	return 0;
}

void agregarPila(Nodo *&Pila, int n)
{
Nodo *nuevo_nodo = new Nodo();
nuevo_nodo->dato = n;
nuevo_nodo->siguiente = Pila;
Pila = nuevo_nodo;	

cout<<"Elemento "<<n<<" Agreado a la pila correctamente "<<endl;
}
