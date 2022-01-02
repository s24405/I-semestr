#include <iostream>
#include <vector>
#include <string>
using namespace std; 

vector<string> split(string x){
    string slowo;
    vector<string> vec;
    bool can_split = 1;
    int i;
    for(i=0; i<x.size(); i++){
        if(x[i] == ' '){
            if(can_split){
            vec.push_back(slowo);
            slowo="";
            can_split=0;
            }
        continue;
        }
    slowo+=x[i];
    can_split = 1;
    }
    if (x.back()!= ' '){
        vec.push_back(slowo);
    }
    return vec;
}

int main(){
    string txt = "lubie programowac";
    int i;
    for(i=0;i<split(txt).size();i++){
        cout<<split(txt)[i]<<", ";
    }
    cout<<" ";
    return 0;
}
