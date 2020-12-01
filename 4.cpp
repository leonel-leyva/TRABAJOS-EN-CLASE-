#include <iostream>

//uso exesivo de variables locales estaticas 


int getinteger()
{
	static bool s_isfirstacall{true};
	
	if (s_isfirstacall)
	{
	std::cout << "ingrese un entero :";
    s_isfirstacall = false;
    }
else 
   {
	std::cout<<"ingrese otro entero :";
   }

int i{};
std::cin>>i;
return i;
	}

int main ()
{
	int a {getinteger() };
	int b {getinteger() };
	std::cout<<a<<" + "<<b<<" = "<<(a+b)<<'\n';
	
	return 0;
}
