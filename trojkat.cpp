#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main() 
{
	int a,b,c;
	cout<<"Podaj wymiary trojkata ";
	cin>>a;
	c=a-1;
	for(int i=0; i<a;i++)
	{
		for(int j=c;j<a;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		c--;
		
		
	}
	return 0;
}
