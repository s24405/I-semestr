#include <iostream>
#include <vector>
#include <string>
using namespace std;

double dot_product(){
    double iloczyn,temp,tmp;
    int  input,in;    
    vector<double> jeden;
    vector<double> dwa;
    cout<<"podaj wartosc liczb peirwszego wetora: ";
    cin>>input;
    cout<<"wprowadz wektor: ";
    for(int i=0; i<input; i++){ 
        cin>>temp;
        jeden.push_back(temp);
    }
    cout<<"podaj wartosc liczb drugiego wektora: ";
    cin>>in;
    cout<<"wprowadz drugi wektor: ";
    for(int i=0; i<in; i++){ 
        cin>>tmp;
        dwa.push_back(tmp);
    }
    if(jeden.size()==dwa.size()){
        for (int i=0; i<jeden.size();i++){
            iloczyn+=jeden[i]*dwa[i];
        }
    }
    else{
        cout<<"blad";
        return 1;
    }
    return iloczyn;
}

int main(){
    int x=dot_product();
    if(x!=1)
    cout<<"iloczy jest rowny "<<x<<endl;
    
    return 0; 
}

