#include<iostream>
using namespace std;

int main()
{
	constexpr int matriz[]{4,6,7,3,8,2,1,9,5};
	int num{};
	
	do
	{
	cout<<"Ingrese un numero entre 1 - 9:";
	cin>>num;	
	}while(num<1 || num>9);
	
	for(int z=0;z<sizeof(matriz)/sizeof(*matriz);++z)
	cout<<"numero[" <<z+1<< "]:"<<matriz[z]<<'\n';	
	
	cout<<"numero  Buscado[ "<<num<<"]:"<<matriz[num-1]<<'\n';
	
	
	return 0;
}


