#include<iostream>
using namespace std;
int main()
{
	int arreglo [] {6, 3, 2, 9, 7, 1, 5, 4, 8};
	int tam=sizeof(arreglo)/sizeof(*arreglo);
	int temp{};
	int index{};
	int ordenado=1;
	{
	for(int y=0;y<tam&&ordenado==1;y++)
	{
		ordenado=0;
	for(int z=0;z<tam-1;z++)
	{
		index=z-1;
		if(arreglo[z]>arreglo[z+1])// Si arreglo en la posicion z es mayor a z+1 entonces se guarda en temporal lo que hay en z y luego se sustituye por z+1 y el valor temporal se sustituye en arreglo[z+1]
		{
			
			ordenado=1;
			temp=arreglo[z];
			arreglo[z]=arreglo[z+1];
			arreglo[z+1]=temp;
		}
	}
	}
	}

	cout<<"terminacion anticipada en:"<<index<<'\n';
	for(int i=0;i<tam;i++) cout<<arreglo[i]<<" ";
}
