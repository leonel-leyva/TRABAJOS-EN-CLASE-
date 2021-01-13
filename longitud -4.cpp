#include<iostream>
#include<string_view>
using namespace std;

int main()
{
	string_view str{"Manzana"};
	cout<<str<<'\n';
	str.remove_prefix(1);//Elimina Un caracter
	cout<<str<<'\n';
	str.remove_prefix(2); //Elimina dos
	cout<<str<<'\n'; //ZANA
	return 0;
}
