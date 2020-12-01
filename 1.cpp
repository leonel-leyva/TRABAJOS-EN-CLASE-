#include <iostream>

namespace constants
{
	constexpr double gravity {9.8};
	
}

double instantvelocity(int time, double gravity)

{
	retrun gravity * time;
	
}
int main()
 {
	std :: cout << instantvelocity (5, constants ::gravity); 
	
	
	return 0;
}
