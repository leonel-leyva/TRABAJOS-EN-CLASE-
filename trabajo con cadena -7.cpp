#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[20]{"Carlos Sandoval"};
	cout<<"Mi nombre es: "<<name<<'\n';
	cout<<name<<" Tiene "<<strlen(name)<<" Letras \n";
	cout<<name<<" Tiene "<<sizeof(name)/sizeof(*name)<<" Caracteres en el arreglo.\n";

	return 0;
}
