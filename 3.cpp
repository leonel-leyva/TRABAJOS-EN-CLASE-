#include <iostream>

void incrementAndrint()
{
static int s_value {1}; //duracion estetica. el inicializador solo se ejecuta  una vez 
++ s_value;
std:: cout<< s_value<<'\n';
	//s_value no se destruye aqui, pero se vuelve innacesible
	//porque esta fuera de alcance 
}

int main() 
{
	incrementAndrint();
	incrementAndrint();
	incrementAndrint();
	
	return 0;
}
