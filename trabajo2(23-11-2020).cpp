#include <iostream>


int main() {
	int x {5};
	int y{5};
	std::cout << x << ' '<< y <<'\n';
	std::cout << ++x << ' '<< --y <<'\n';
	std::cout << x << ' '<< y <<'\n';
	std::cout << x++ << ' '<< y-- <<'\n';
	std::cout << x << ' '<< y <<'\n';
	return 0;
}
