#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	struct Nodo *siguiente;
}*inicio,*aux,*actual, *anterior;

void insertarNodo(int); //prototipos de la funcion
void mostrarNodos(); //prototipos de la funcion
void ordenarNodos();

int main(int argc, char**argv){
	cout<<"ALEXANDER GONZALEZ ORTEGA"<<endl;
	cout<<"ICO-22"<<endl; 
	int cantidad;
	int numero;
	int numero1, numero2, numero3, numero4,numero5;
	inicio=NULL; //apunta hacia NULL
	cout<<"¿Cuantos datos quieres ingresar? ";
	cin>>cantidad;
	for(int i=1; i<=cantidad; i++){
		cout<<"Ingresa el primer dato: ";
		cin>>numero1;
		insertarNodo(numero1);
	}
	
	ordenarNodos();
	mostrarNodos();
	cin.get();
	return 0;
	cout<<endl;
	
}
	
void insertarNodo(int valor){ 
	actual=inicio; //actual tambien apunta a NULL
	if(actual==NULL){ 
		aux=new Nodo(); //para corroborar si las listas estan vacias, memoria dinamica, aux=nuevo nodo
		aux->dato=valor;
		aux->siguiente=NULL; 
		inicio=aux; 
	}else{
		while(actual->siguiente!=NULL){
			actual=actual->siguiente; 
		}
			aux=new Nodo();
			aux->dato=valor;
			aux->siguiente=NULL;
			actual->siguiente=aux;
		}
		}

void mostrarNodos(){
	actual=inicio;
	while(actual!=NULL){ 
	cout<<" ->"<<actual->dato<<" ";
	actual=actual->siguiente;
	}
}

void ordenarNodos(){
	if(inicio!=NULL){		
		anterior=NULL;
		aux=NULL;
		actual=inicio;
		{
				while((actual->siguiente!=NULL) && (actual->dato < actual->siguiente->dato)){							
				anterior=actual;
				actual=actual->siguiente;
		}
			if (actual->siguiente==NULL)
			{
				cout<<"\nordenamiento terminado\n";
			}else if(anterior==NULL){
				aux=actual;
				actual=actual->siguiente;
				inicio=actual;
				aux->siguiente=actual->siguiente;
				actual->siguiente=aux;
			}else{
				aux=actual;
				actual=actual->siguiente;
				anterior->siguiente=actual;
				aux->siguiente=actual->siguiente;
				actual->siguiente=aux;
			}
		}
		
		while((actual->siguiente!=NULL) && (actual->dato < actual->siguiente->dato)){							
				anterior=actual;
				actual=actual->siguiente;
		}
			if (actual->siguiente==NULL)
			{
				cout<<"\nordenamiento terminado\n";
			}else if(anterior==NULL){
				aux=actual;
				actual=actual->siguiente;
				inicio=actual;
				aux->siguiente=actual->siguiente;
				actual->siguiente=aux;
			}else{
				aux=actual;
				actual=actual->siguiente;
				anterior->siguiente=actual;
				aux->siguiente=actual->siguiente;
				actual->siguiente=aux;
			}
	}
}
