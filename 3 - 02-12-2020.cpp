#include <iostream>
#include <string>

//buena practica 

int main() {
	
	std::cout <<"ingrese su nombre completo  :";
	std :: string name ;
	std :: getline (std ::cin , name); 
	
	std:: cout<<"ingrse tu edad :" ;
	std::string age ;
	std:: getline (std::cin,age) ;
	
	std::cout <<"tu nombre es  "<<name << "   y tu edad es   "<<age<< '\n';
	
	return 0;
}
