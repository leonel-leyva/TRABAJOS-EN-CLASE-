#include <iostream>
#include "constants.h"
using namespace std;
int main() {
		int radius{};
	cout<<"Ingresa el Radio:";
	cin>>radius;
	cout<<"La circunferencia es: "<<2.0*radius*constants::pi<<'\n';
	
	return 0;
}
