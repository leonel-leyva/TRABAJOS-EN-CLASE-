#include <iostream>

bool isequal(int x, int y)
{
	return(x==y);
	
}
int main() {
	std::cout<<"ingrese un elemento ";
	int x{};
	std::cin>> x;
	
	std::cout<<"ingrese otro elemento ";
	int y{};
	std::cin>> y ;
	
	std::cout << std:: boolalpha;
	
	std::cout<< x<< " y " "son iguales ";
	std::cout<<isequal(x,y);
	
	return 0;
}
