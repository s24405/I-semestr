#include <iostream>
using namespace std;

void iota(int n, int start)
{
	int* a=new int[n];
	int i=start;
	for(i;i<n+start;i++)
	{
		cout<<i<<endl;
	}
}

int main() 
{
    int n, start;
    cout <<"Podaj n"<<endl;
    cin>>n;
    cout<<"Podaj poczatek"<<endl;
    cin>>start;
    iota(n, start);
    return 0;
}
