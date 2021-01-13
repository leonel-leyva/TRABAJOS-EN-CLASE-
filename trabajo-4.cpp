#include<iostream>
using namespace std;

int main()
{
	int vector[]{1,1,2,3,5,8,13,21};
	
	cout<<"El arreglo tiene: "<<sizeof(vector)/sizeof(*vector)<<" Elementos\n";
	return 0;
}
