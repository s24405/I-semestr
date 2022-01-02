#include <iostream>
#include <string>

using namespace std;

int count_chars(string x, char y){
    int suma=0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]==y)
        {
            suma++;
        }
    }   
    return suma;
}

int main(){
    int ilosc=0;
    string wyraz;
    char znak;
    cout<<"Podaj wyraz: "<<endl;
    cin>>wyraz;
    cout<<"Podaj szukany znak: "<<endl;
    cin>>znak;
    ilosc=count_chars(wyraz,znak);
    cout<<"liczba wystapien znaku w przekazanym przez argument wyrazu: "<<ilosc<<endl;
    return 0;
}
