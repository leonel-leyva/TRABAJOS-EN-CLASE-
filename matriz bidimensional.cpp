#include<iostream>
using namespace std;

int main()
{
	constexpr int numRows{10};
	constexpr int numCols{10};
	int product[numRows][numCols]{};
	
	for(int row=1;row<numRows;++row)
	{
		for(int col=1;col<numCols;++col)
		{
			product[row][col]=row*col;
		}
	}
	
	for(int row=1;row<numRows;++row)
	{
		for(int col=1;col<numCols;++col)
		cout<<product[row][col]<<'\t';
	}
	cout<<'\n';
	return 0;
}
