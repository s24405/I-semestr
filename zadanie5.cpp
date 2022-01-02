#include <iostream>

using namespace std;

bool is_even(int x){
    if(x%2==0)
        return true;
    return false;
    
}
int main(){
    int x;
    cout<<"Podaj liczbe: ";
    cin>>x;
    
    if(is_even(x)) 
	cout<<"Parzysta "<<endl;
    
    else cout<<"Nieparzysta"<<endl;
    return 0;
}

