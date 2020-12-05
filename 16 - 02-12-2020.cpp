#include <iostream>

struct employee{
	
	short id;
	int age;
	double wage;
};
void printinformation(Employee employee )
{
std:: cout <<"id   "<<employee.id<<'\n';
std:: cout <<"age   "<<employee.age<<'\n';
std:: cout <<"wage   "<<employee.wage<<'\n';	
}
int main() {
	
	Employee joe {14,32,24.15};
	Employee maria {15,28,18.27};
	
	printinformation(joe);
	
	std::cout<<'\n';
	
	printinformation(joe);
	
	return 0;
}
