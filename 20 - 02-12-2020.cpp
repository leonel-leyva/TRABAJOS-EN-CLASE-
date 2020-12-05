#include<iostream>

struct goku 
{
	
	char kakaroto[40];
	 int poder;
	 char mono[40];
};


void caracter(goku goku)
{
	std::cout<<" Nombre :"<<goku.kakaroto<<" poder: "<< goku.poder<< "  peliador: "<< goku.mono<<'\n';
}

int main()
{
	goku mono1{" KAKAROTO  ", 1300 ,"ZALLAYIN  "};
	goku mono2{" VEGETA  ",1100,"ZALLAYIN  "};
	caracter(mono1);
	std::cout<<'\n';
	caracter(mono2);
	return 0;
}
