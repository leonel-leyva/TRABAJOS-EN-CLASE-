#include <iostream>

//mala practica si hay un coflicto de nombres en un std::cout y alvun otro usi de cout
namespace a 
{
	int x{10};
	
}
namespace b
{
	int x{20 };
	
}

int main() {
	using namespace a;
	using namespace b;
	std::cout << x << '\n';
	
	return 0;
}
