#include <iostream>

struct employee
{
	short id;
	int age;
	double wage;
};

int main() {
	
	std::cout <<"el tama;o de employee es "  <<sizeof (employee)<<'\n';
	
	return 0;
}
