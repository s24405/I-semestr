#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main() 
{
	int a,b;
	cout<<"Podaj wymiary trojkata ";
	cin>>a;
	
	for
	(int i=0; i<a;i++)
	{
		for(int j=a;j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
		a=a-1;
		
	}
	return 0;
}
