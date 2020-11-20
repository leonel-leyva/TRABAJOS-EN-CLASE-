#include <iostream>
#include <cmath>



//nota : exp debe de ser positivo

std::int_fast64_t powint(int base,int exp)
{
    std::int_fast64_t result{1};
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>=1;
        base *= base;
    }
    return result;

}
	
		
int main() {
	
std::cout<<powint(7,12);
double x{stud::pow(3.0 , 4.0)};

	
	return 0;
}
