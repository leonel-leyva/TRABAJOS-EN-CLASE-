#include<iostream>
using namespace std;

int main()
{
	constexpr int matriz[]{4,6,7,3,8,2,1,9,5};
	for(int i=0;i<sizeof(matriz)/sizeof(*matriz);i++)
	cout<<"Elemento["<<i<<"]:"<<matriz[i]<<'\n';
	return 0;
}
