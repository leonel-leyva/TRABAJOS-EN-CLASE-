#include<iostream>
using namespace std;
int main()
{
	char myString[]{"String"};
	const int length{static_cast<int>(sizeof(myString)/sizeof(*myString))-1};
	cout<<myString<<" Tiene "<<length<<" Caracteres. \n";
	
	for(int index=0;index<length;++index)
		cout<<static_cast<int>(myString[index])<<" ";
		cout<<'\n';
		return 0;
}
