#include<iostream>
using namespace std;
int g_x{};
void dosomething()
{
	
	g_x=3;
	cout<<g_x<<'\n';
	
}

int main()
{
	
	dosomething();
	cout<<g_x<<'\n';
	g_x=5;
	cout<<g_x<<'\n';
	return 0;
	
}
