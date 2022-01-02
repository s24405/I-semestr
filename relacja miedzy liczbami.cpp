#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a,b,c,d,e;
	
cout<<"podaj piec liczb"<<endl;
cin>>a>>b>>c>>d>>e;

if(a>b)
{
	cout<<a<<">"<<b<<endl;
}
else if(a<b)
{
	cout<<a<<"<"<<b<<endl;
}
else
{
	cout<<a<<"="<<b<<endl;
}


if(a>c)
{
	cout<<a<<">"<<c<<endl;
}
else if(a<c)
{
	cout<<a<<"<"<<c<<endl;
}
else
{
	cout<<a<<"="<<c<<endl;
}


if(a>d)
{
	cout<<a<<">"<<d<<endl;
}
else if(a<d)
{
	cout<<a<<"<"<<d<<endl;
}
else
{
	cout<<a<<"="<<d<<endl;
}

if(a>e)
{
	cout<<a<<">"<<e<<endl;
}
else if(a<e)
{
	cout<<a<<"<"<<e<<endl;
}
else
{
	cout<<a<<"="<<e<<endl;
}
	return 0;
}
