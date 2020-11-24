#include <iostream>

//ejemplo logica AND

int main() {
	
	std::cout <<"ingrese un numero:  ";
	int value {};
	std::cin>>value;
	
	if (value >10 && value <20)
    std::cout<<"EL valor esta entero 10 y 20\n";
    else 
      std::cout<<"EL valor no es entre  10 y 20\n";
	return 0;
}
