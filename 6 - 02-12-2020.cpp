#include <iostream>
#include <string>


// mala practica 

int main() {
	
	std::string a{"45"};
	std::string b{"11"};
	
	std::string <<a + b <<'\n';
	a+= "volts";
	std::cout << a<< "\n";
	
	
	
	return 0;
}
