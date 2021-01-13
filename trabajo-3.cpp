#include<iostream>
using namespace std;

void passValue(int value)
{
	value=99;
}

void passArray(int prime[5])
{
	prime[0]=11;
	prime[1]=7;
	prime[2]=5;
	prime[3]=3;
	prime[4]=2;
}
int main()
{
	int value{1};
	int prime[5]{2,3,5,7,11};
	cout<<"Antes del passValue:"<<value<<'\n';
	passValue(value);
	cout<<"Despues del passValue:"<<value<<'\n';
	cout<<"Antes del passArray: "<<prime[0]<<" "<<prime[1]<<" "<<prime[2]<<" "<<prime[3]<<" "<<prime[4]<<'\n';
	passArray(prime);
	cout<<"Despues del passArray: "<<prime[0]<<" "<<prime[1]<<" "<<prime[2]<<" "<<prime[3]<<" "<<prime[4]<<'\n';
	return 0;
}
