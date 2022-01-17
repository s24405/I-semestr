#include <iostream>
#include <string>

int count_chars(std::string x, char y){
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
    std::string wyraz;
    char znak;
    std::cout<<"Podaj wyraz: \n";
    std::cin>>wyraz;
    std::cout<<"Podaj szukany znak: \n";
    std::cin>>znak;
    ilosc=count_chars(wyraz,znak);
    std::cout<<"Ilość znaków w wyrazie jest równa: "<<ilosc<<"\n";
    return 0;
}
