#include <iostream>
#include <string>

// mala practica 

int main() {
	
	std::cout <<"seleccionar 1 o 2 :";
	int choice{};
	std :: cin>>choice;
	
	std:: cout<<"Aora ingrese su nombre :" ;
	std::string name;
	std:: getline (std::cin,name) ;
	
	std::cout <<"hola   "<<name << "   seleccionaste    "<<choice << '\n';
	
	return 0;
}
