#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a; // a bedzie warunkowalo dni miesiaca 
	int b; // b bedzie watunkowalo rok, ktory jak jest podzielny na cztery oznacza ze luty ma inna ilosc dni niz normlanie 
	
	cout<<"podaj rok"<<endl;
	cin>>b;
	cout<<"podaj numer miesiaca "<<endl;
	cin>>a;
	
	
	if(b%4==0 && b%100!=0)
	{
	cout<<"rok jest przestepny"<<endl;
	
	switch (a)
	{
	case 1:
		cout<<"styczen ma 31 dni"<<endl;
		break;
		
		case 2:
		cout<<"luty ma 29 dni"<<endl;
		break;
		
		case 3:
		cout<<"marzec ma 31 dni"<<endl;
		break;
		
		case 4:
		cout<<"kwiecien ma 30 dni"<<endl;
		break;
		
		case 5:
		cout<<"maj ma 31 dni"<<endl;
		break;
		
		case 6:
		cout<<"czerwiec ma 31 dni"<<endl;
		break;
		
		case 7:
		cout<<"lipiec ma 31 dni"<<endl;
		break;
		
		case 8:
		cout<<"sierpien ma 31 dni"<<endl;
		break;
		
		case 9:
		cout<<"wrzesien ma 30 dni"<<endl;
		break;
		
		case 10:
		cout<<"pazdziernik ma 31 dni"<<endl;
		break;
		
		case 11:
		cout<<"listopad ma 30 dni"<<endl;
		break;
		
		case 12:
		cout<<"grudzien ma 31 dni"<<endl;
		break;
	}
	
	
}
else 
{
	cout<<"rok nie jest przestepny"<<endl;
		switch (a)
	{
	case 1:
		cout<<"styczen ma 31 dni"<<endl;
		break;
		
		case 2:
		cout<<"luty ma 28 dni"<<endl;
		break;
		
		case 3:
		cout<<"marzec ma 31 dni"<<endl;
		break;
		
		case 4:
		cout<<"kwiecien ma 30 dni"<<endl;
		break;
		
		case 5:
		cout<<"maj ma 31 dni"<<endl;
		break;
		
		case 6:
		cout<<"czerwiec ma 31 dni"<<endl;
		break;
		
		case 7:
		cout<<"lipiec ma 31 dni"<<endl;
		break;
		
		case 8:
		cout<<"sierpien ma 31 dni"<<endl;
		break;
		
		case 9:
		cout<<"wrzesien ma 30 dni"<<endl;
		break;
		
		case 10:
		cout<<"pazdziernik ma 31 dni"<<endl;
		break;
		
		case 11:
		cout<<"listopad ma 30 dni"<<endl;
		break;
		
		case 12:
		cout<<"grudzien ma 31 dni"<<endl;
		break;
	}
}
	return 0;
}
