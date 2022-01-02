
#include <bits/stdc++.h>
using namespace std;

string palindrom(string wyraz)
{
	string odwrotnosc=wyraz;
	reverse (odwrotnosc.begin(), odwrotnosc.end());
	
	if (wyraz == odwrotnosc)
	{
		return " wyraz jest palindromem ";
		
	}
	else 
	{
		return " wyraz nie jest palidroem";
		
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	 string wyraz;
	 cout<<"podajwyraz "<<endl;
	 cin>>wyraz;
	 cout<<palindrom(wyraz)<<endl;
	return 0;
}
