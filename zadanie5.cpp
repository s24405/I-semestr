#include <iostream>

bool is_even(int x){
    if(x%2==0)
        return true;
    return false;
    
}
int main(){
    int x;
    std::cout<<"Podaj liczbe do sprawdzenia: ";
    std::cin>>x;
    if(is_even(x)) std::cout<<"Parzysta\n";
    else std::cout<<"Nieparzysta\n";
    return 0;
}
