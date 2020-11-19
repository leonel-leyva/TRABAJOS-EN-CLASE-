#include<iostream>
#include<conio.h>
using namespace std;


const double gravedad{9.8};
double distancia,total;
int segundos;

int main()
{

    cout<<"segundos del 1 al 5 \n";
    cout<<endl;
	cout<<"ALTURA DE LA TORRE : \n "; 
	cin>>distancia;
	
	
	cout<<"SEGUNDOS:\n ";
	 cin>>segundos;
	
	
	if(distancia==0)
	{  //formula 
		total=((gravedad*(segundos*segundos))/2);
		cout<<" LA PELOTA TOMO LA DISTANCIA DE  :"<<total;
		
	}
	else if(segundos==1)
	{
		
	  total=((gravedad*(segundos*segundos))/2);
		cout<<" LA PELOTA TOMO LA DISTANCIA DE :"<<total;	
	}
		else if(segundos==2)
	{
		
	  total=((gravedad*(segundos*segundos))/2);
		cout<<" LA PELOTA TOMO LA DISTANCIA DE :"<<total;	
	}
		else if(segundos==3)
	{
		
	  total=((gravedad*(segundos*segundos))/2);
		cout<<" LA PELOTA TOMO LA DISTANCIA DE :"<<total;	
	}
		else if(segundos==4)
	{
		
	  total=((gravedad*(segundos*segundos))/2);
		cout<<" LA PELOTA TOMO LA DISTANCIA DE :"<<total;	
	}
		else if(segundos==5)
	{
		
	  total=((gravedad*(segundos*segundos))/2);
		cout<<" LA PELOTA TOMO LA DISTANCIA DE:"<<total;	
	}
	
	else
	{
		cout<<" NO LANSO NADA ";
	}
	return 0;
}

