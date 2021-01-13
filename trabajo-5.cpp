#include<iostream>
using namespace std;

int main()
{
	constexpr int scores[]{84,92,76,81,56};
	constexpr int numStudents{static_cast<int>(sizeof(scores)/sizeof(*scores))};
	int maxScore{0};
	for(int student=0;student<numStudents;++student)
	{
		if(scores[student]>maxScore)
			maxScore=scores[student];
	}
	cout<<"La mejor Calificacion fue: "<<maxScore<<'\n';
	return 0;
}
