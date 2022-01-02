#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 

{
int a,b,s;
cout<<"podaj a"<<endl;
cin>>a;
cout<<"podaj b"<<endl;
cin>>b;
cout<<"podaj s"<<endl;
cin>>s;
for(int i=10; i>=a; i=i-s)
{
	cout<<"A: "<<i<<endl;

}
for(int j=0; j<b; j=j+s)
{
cout<<"B: "<<j<<endl;
}
	return 0;
}
