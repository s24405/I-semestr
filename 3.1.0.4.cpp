#include <iostream>
using namespace std;

void asum(int n)
{
	int min=0;
	int poz=0;
	int* a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Podaj wartosc do kazdego pola tablicy:"<<i<<endl;
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{if(min<a[i])
		{
			min=a[i];
			poz=i;
		}
	}
	cout<<"Najmniejsza wartosc wystepuje na pozycji : "<<poz<<endl;
	cout<<"Ma wartosc: "<<poz<<endl;
}

int main() 
{
    int n;
    cout <<"Podaj n"<<endl;
    cin>>n;
    asum(n);
    return 0;
}

