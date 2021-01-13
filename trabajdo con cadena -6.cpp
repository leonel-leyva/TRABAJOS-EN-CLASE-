#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char source[]{"Copia esta cadena"};
	char destiny[50];
	strcpy(destiny,source);
	cout<<destiny<<'\n';
	return 0;
}
