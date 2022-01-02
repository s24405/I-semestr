#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int n; //nasz liczba do liczenia silni
	long long silnia = 1; //przechowywujemy tymczasowo wynik, taka dodatkowa zmienna

	cout<<"podaj wartosc n: ";
	cin>>n;

	for(int i=n;i>1;i--) // dla i rownego naszej liczbie i wiekszego od jeden bedziemy mnozyc liczby mniejsze o jeden
		silnia*=i; 

	cout<<"silnia z liczby "<<n<<"! "<<"wynosi "<<silnia<<endl;

	return 0;
}


