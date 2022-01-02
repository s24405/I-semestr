#include<iostream>
using namespace std;

bool czy_liczba_jest_pierwsza(int n)
{
	if(n<2) 				//jak mniejsza niz dwa to odpada 
		return false; 
		
	for(int i=2;i*i<=n;i++) //i to dzielnik ktory wzrastao 1,, zacyznamy od 1 bo liczba musi byc podzielna przez 1
		if(n%i==0) 			// i sprawdza tak d³ugo a¿ i jest równe naszej liczbie
			return false;   //jesli n nie jest podzielna przez inne wartosci niz 1 i siebie to git
	return true;
}

int main()
{
	int suma,n;
	suma=0;
	
	cout<<"podaj n: ";
	cin>>n;
	
	
		int petla =0;
	
	if(czy_liczba_jest_pierwsza(n))
{
				cout<<n<<" jest liczba pierwsza"<<endl;
				}
	else{
	
		cout<<n<<" nie jest liczba pierwsza"<<endl;
		}
		
	for(int i=n; i>0; i--) {
        if(czy_liczba_jest_pierwsza(i)) 
		{
            suma += i;
    petla++;
        }
    }

    //liczby musza byc <n i pierwsze

    cout<<"suma liczb pierwszych mniejszych rownych n wynosi:"<<suma<<endl;
		
		cout<<"ilosc petli"<<petla<<endl;
		
	
	return 0;
}
