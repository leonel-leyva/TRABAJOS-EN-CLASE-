#include <iostream>

//13

int main() {
	
	enum color
	{
		color_red,
		color_blue
	};
	
	enum fruit
	{
		fruit_banana;
		fruit_apple
	};
	
	color color {color_red};
	fruit fruit {fruit_banana};
	
	if (color == fruit)//el comilador compara a y b con int 
	std::cout <<"color y fruta son iguales \n"; //y son iguales!
	else 
	std::cout<<"color y fruta no son iguales \n";
	

	return 0;
}
