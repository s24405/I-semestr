#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 

{
int a,b;
cout<<"podaj a"<<endl;
cin>>a;
cout<<"podaj b"<<endl;
cin>>b;
for(int i=10; i>=a; i--)
{
	cout<<"A: "<<i<<endl;

}
for(int j=0; j<b; j++)
{
cout<<"B: "<<j<<endl;
}
	return 0;
}
