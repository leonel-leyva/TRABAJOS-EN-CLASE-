#include <iostream>


int main() {
	
	bool inbigclassroom {false};
	const int classsize {inbigclassroom ? 30 : 20};
	
	std::cout<<"el numero del alimno de la clase es  :"<<classsize;
	return 0;
}
