#include <iostream>
#include <typeinfo>
//otro caso 

int main() {
	
	short d{4.0};
	short s{2};
	
	std::cout<<typeid (d+s).name ()<<'  '<< d + s <<'\n';
	
	
	return 0;
}
