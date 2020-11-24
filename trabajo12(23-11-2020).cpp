#include <iostream> ??std ::abs
#include <algorithm>//std::max

//regresa true si la diferencia entre a y b estan dendtro del porcentaje epsilon del numero mayor a y b 

bool aproximateyequal (double a , double b , double epsilon)
{
	retrun (std::abs (a - b ) <= ( stud::max (std::abs(a),  std::abs (b))  * epsilon))
}


bool aproximateyequal (double a , bouble b , double epsilon)
{
double diff{std::abs(a/b)};
	
	if(diff <= adsepsilon)
	return true;
	
	return (diff<= (std::max (std::abs(a), std:: abs (b)) *  epsilon));	
	
}

int main() {
	
	std::cout<< approximateyequal(a,1.0,1e-8)<<'\n';
	std::cout<< approximateyequal(a-1.0,0.0,1e-8)<<'\n';
	std::cout<< approximateyequal(a-1.0,0.0,1e-12,1e-8)<<'\n';
	 
	
	return 0;
}
