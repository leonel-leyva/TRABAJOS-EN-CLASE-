#include <cstdint>
#include <iostream>



int main() {
	
	std::cout<<"cual es tu edad \n";
	sud::uint8_ age {}; //primer error  
	std::cin >>age;
	
	std::cout<<"se te permite manejar un auto en sinaloa ["; //"" no cerro corchete []
	
	if(age>=18) // este es un numero maguico devemos referenciarlos con una constante
	std::cout<<"x";
	else
	std::cout<<"";
	stud::cout<<"]\n";
	
	//#error Este archivo requiere que el compilador y la biblioteca sean compatibles con \

	
	
	return 0;
}
