#include <iostream>
#include <string>
struct point3d
{
	double x;
	double y;
	double z;
	
};
point3d gatZeroPoint()
{
	point3d temp{0.0,0.0,0.0};
	return temp;
}

point3d gatZeroPoint2()
{
	return {0.0,0.0,0.0};
}

point3d gatZeroPoint3()
{
	return {};
	
}

int main() {
	
	point3d zero{ gatZeroPoint() };
	
	if (zero.x == 0.0 && zero.y == 0.0 && zero.z ==0.0)
	std::cout<<"este punto es cero\n";
	else 
	std::cout<<"este punto es cero\n";	
	
	return 0;
}
