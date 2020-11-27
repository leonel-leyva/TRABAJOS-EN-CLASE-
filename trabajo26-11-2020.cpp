#include <iostream>

using namespace std;
int num1, num2;

int main() {
	cout <<"INGRESE UN NUMERO MENOR : ";
	cin>>num1;
	
	cout << "INGRESE EL NUMERO MAYOR : ";
	cin >> num2;
	 
	 if (num1>num2) {
	 
	 int val=num1;
	 num1=num2;
	 num2=val;
	 
	 }
	cout<< "mayor es :  "<< num2;
	cout<<endl;
	cout<<"menor es  :  "<< num1;
	return 0;
}
