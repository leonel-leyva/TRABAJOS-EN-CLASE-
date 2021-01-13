#include<iostream>
using namespace std;

int main()
{
	char name[255];
	cout<<"Ingrese su nombre:";
	cin.getline(name,sizeof(name)/sizeof(*name));
	cout<<"Su nombre es: "<<name<<'\n';
	return 0;
}
