#include <iostream>

//14

int main() {
	
	enum class color 
	{	
	red,
	blue	
	};
  color color {color::red};
if (color == color:: red)//es correcto
std::cout <<"el color es rrojo !\n";
else if (color == color :: clue )
std::cout<<" el color es azul !\n";
 
	return 0;
}
