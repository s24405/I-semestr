#include <iostream>
using namespace std;

void amax(int n)
{
	int max=0;
	int poz=0;
	int* a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Podaj wartosc do pola tablicy:"<<i<<endl;
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			poz=i;
		}
	}
	cout<<"W tablicy najwieksza wartosc ma pozycja: "<<poz<<endl;
	
}

int main() 
{
    int n;
    cout <<"Podaj n"<<endl;
    cin>>n;
    amax(n);
    return 0;
}

