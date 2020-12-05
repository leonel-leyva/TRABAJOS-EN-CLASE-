#include <iostream>
#include <string>


enum itemtype 
{
    itemtype_sword,
    itemtype_torch,
    itemtype_potion
	
}

std::string getItemName (Itemtype itemtype )
{
		if (itemtype  == itemtype _sword)
	return"sword";
	if (itemtype  == itemtype _torch)
		return"torch";
	if (itemtype  == itemtype _potion)
		return"potion"
		return"???";
}
int main() 
{
color color {color_torch};
std::cout <<"you are carrynig a  "<<getItemName (color)<<'\n';
	return 0;
}
