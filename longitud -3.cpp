#include<iostream>
#include<string_view>
using namespace std;

int main()
{
string_view str{"Los trenes son rapidos!"};
cout<<str.length()<<'\n';
cout<<str.substr(0,str.find(' '))<<'\n';
cout<<(str=="Los trenes son rapidos!")<<'\n';
cout<<str.starts_with("Botes")<<'\n';
cout<<str.ends_with("rapidos!")<<'\n';
cout<<str<<'\n';

	return 0;
}
