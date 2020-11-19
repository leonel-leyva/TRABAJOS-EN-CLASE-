#include <iostream>
#include<conio.h>
//LIBRERIA NOS SIRVE PARA using namespace std; Y YA NO LO ESCRIBES MAS 
#include<stdlib.h>
//LIBRERIA NOS SIGRVE PARA LA OPCION 	system("cls"); QUE ES PARA LIMPIAR PANTALLA



using namespace std;
//que funcion queiere
string hacer="";
//declaracion de numeros 
double  numero,numero2;
//declaracion 
double suma,resta,multip,divicion;



int main() {
	cout<<"INGRESE EL PRIMERO NUMERO DESEADO  \n";
	cin>>numero;
	
	cout<<"INGRESE EL SEGUNDO NUMERO DESADO \n";
	cin>>numero2;
	
	cout<<endl;
	cout<<"(+ para suma) (- para resta) (* para multiplicar) (/ para divicion) "; cout<<endl;
    cout<<"--------------------------------------------------------------------";
    cout<<endl;
	cout<<"PONGA EL SIGNO DE LA OPERACION QUE DESE HACER \n";
  

	cin>> hacer;
	system("cls");
	if(hacer =="+")
    {
    	suma=numero+numero2;
    	
    	cout<<"LA SUMA DE LOS DOS NUMEROS ES : \n"<<suma;
    	
	}
	
	else if(hacer == "-")
    {
    	resta=numero-numero2;
    	cout<<"LA RESTA DE LOS DOS NUMEROS ES :\n "<<resta;
    	
	}
	else if(hacer=="*")
    {
    	multip=numero+numero2;
    	cout<<"LA MULTIPLICACION DE LOS DOS NUMEROS ES : \n"<<multip;
    	
	}
		else if(hacer=="/")
    {
    	divicion=numero/numero2;
    	cout<<"LA DIVIVION DE LOS DOS NUMEROS ES :\n "<<divicion;
    	
	}
	else {
		cout<<" LO QUE ESCRIBISTE NO ES CORRESPONTIENTE CON ALGUNA CUENTA /n";
	}
	
	
	
	
	
	
	
	return 0;
}
