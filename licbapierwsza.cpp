#include <iostream>
#include<string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv)
 {
 	int a;
 	cout<<"podaj a "<<endl;
 	cin>>a;
 	if(a<2)
 	return false;
 	
 	

 	for(int i=2; i<a;i++)
 	if(a&i==0)
 	{
 		cout<<"liczba ma inny dzielnik wiec nie jest liczba pierwsza"<<endl;
	 }
	 else
	 {
	 	cout<<"liczba jest pierwsza"<<endl;
	 }
 	
 	
	return 0;
}
