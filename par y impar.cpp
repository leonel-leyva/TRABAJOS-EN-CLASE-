#include <iostream>

using namespace std;
int numero;

int pares (int numero){
	
 if(numero ==0){
 	cout<<"el numero que ingreso es el 0 INGRESE OTRO NUMERO";
 } 	
	else if (numero%2==0){
		cout<<"el numero : "<<numero<<  "  es un numero par ";
		
	}
	else{
		cout<<"el numero  :  "<<numero<< "  es un numero inmpar";
	}
		
	
}

int main() {
 cout <<"ingrese un numero :";
 cin >>  numero;
 
	pares(numero);
	
	
	

	
	return 0;
}
