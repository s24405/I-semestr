#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct student
{
	string imie;
	string nazwisko;
	vector<int>oceny;
	
};

double average_of(vector<int>wow)
{
	int suma;
	double wynik;
	
	for(int i=0; i<wow.size(); i++ )
	{
		suma+=wow[i];
	}
	wynik=suma/wow.size();
	return wynik;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 vector<int> pog ={2,3,4};
 student martyna {"martyna", "perzynska", pog};
 cout<<average_of(martyna.oceny);

	return 0;
}
