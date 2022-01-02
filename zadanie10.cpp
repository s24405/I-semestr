#include <iostream>
#include <string>
using namespace std;
void word(int box, string word){
    cout<<"*"<<word;
    for (int i=1; i<=box-word.size();i++) 
    {
        std::cout<<" ";
    }
    std::cout<<"* "; 
}
void box_print(string a,string b,string c,string e,string d){
    int box=0;
    if(a.size()>box)
    {
        box=a.size();
    }
    if(b.size()>box)
    {
        box=b.size();
    }
    if(c.size()>box) 
    {
        box=c.size();
    }
    if(e.size()>box) 
    {    
        box=e.size();
    }
    if(d.size()>box) 
    {
        box=d.size();
    }        
    for (int i=0;i<box+2;i++) 
    {    
        cout<<"*";
    }    
    cout<<endl;
    word(box,a);
    word(box,b);
    word(box,c);
    word(box,e);
    word(box,d);
    for (int i=0;i<box+2;i++) 
    {
        cout<<"*";
    }
    cout<<endl; 
}

int main(){

    string a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    box_print(a,b,c,d,e);
    return 0;
}
