#include<iostream>
#include<string_view>
using namespace std;
string_view askForName()
{
	string str{};

	cout<<"Cual es tu nombre?:";
	cin>>str;
	string_view view{str};
	cout<<"Hola "<<view<<'\n';
	return view;
}
int main()
{
	string_view view{askForName()};
	cout<<"Tu Nombre es "<<view<<'\n';//Comportamiento indefinido.
	return 0;
}
