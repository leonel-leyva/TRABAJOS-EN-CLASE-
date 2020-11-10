#include<iostream>
using namespace std;
int main()
{
	
	cout<<"ingrese un caracter ";
	char ch{};
	cin>>ch;
	cout<<ch<<"  tiene el codigo ascii:  "<<static_cast<int>(ch)<<'\n';
	std::cin>>ch;
	cout<<ch<<"  tiene el codigo ascii:  "<<static_cast<int>(ch)<<'\n';
	return 0;
}
