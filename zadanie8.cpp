#include <iostream>
#include <string>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string wyraz;
	cout<<"podaj wyraz "<<endl;
	cin>>wyraz;
	
	for(string::size_type i=0; i<wyraz.size(); i=i+3)
	{cout<<wyraz[i]<<" "<<endl;
	}
	return 0;
}
