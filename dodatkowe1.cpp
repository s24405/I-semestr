#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	
	cout<<"program wypisujacy dzien tygodnia"<<endl;
	 
	 cout<<"podaj liczbe warunkujaca dzien tygodnia od 1-7"<<endl;
	 cin>>a;
	 switch (a)
	 {
	 	case 1:
	 	cout<<"poniedzialek"<<endl;
	 	break;
	 	
	 	case 2:
	 	cout<<"wtorek"<<endl;
	 	break;
	 	
	 	case 3:
	 	cout<<"sroda"<<endl;
	 	break;
	 	
	 	case 4:
	 	cout<<"czwartek"<<endl;
	 	break;
	 	
	 	case 5:
	 	cout<<"piatek"<<endl;
	 	break;
	 	
	 	case 6:
	 	cout<<"sobota"<<endl;
	 	break;
	 	
	 	case 7:
	 	cout<<"niedziela"<<endl;
	 	break;
	 	default:cout<<"podales zla liczbe"<<endl;
	 }
	return 0;
}
