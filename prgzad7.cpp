#include <iostream>
#include <vector>
#include <string>
using namespace std; 

struct Student{

    string imie;
    string nazwisko;
    vector<double>oceny;

};

struct grupa{
string tag;
vector<Student> studs;
}; 

void dodaj_grupa(grupa&grupa, Student& stud){
    grupa.studs.push_back(stud);   
}


int main(){
    string s1 = Student{"Jolanta", "Kugecka", {5,1,5,1,4,2,4,3}};
    string s2 = Student{"Julek", "Juras" ,{2,2,2.5,2,2,2}};
    string s3 = Student{"Krystian", "Zlecki", {5,1,4,6,3,5.2,2}};
    string s4 = Student{"Krzysztof", "Bronicki",{2,1.4,5,4,2,5,2}};
    
    auto grupa = grupa{"grupa", {s1}};
    dodaj_grupa(grupa, s2);
    dodaj_grupa(grupa, s3);
    dodaj_grupa(grupa, s4);
    
    cout<<"Studenci w grupie: ";
    for(auto i : grupa.studs){
        cout<<i.imie<<" "<<i.nazwisko<<" , ";
    }
    cout<<endl;
    return 0;
}
