#include<iostream>
#include<string_view>
using namespace std;

int main()
{
	char text[]{"Hola"};
	string_view str{text};
	string_view  more{str};
	
	cout<<text<<" "<<str<<" "<<more<<'\n';
	return 0;
}
