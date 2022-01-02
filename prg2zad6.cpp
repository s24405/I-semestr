#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student{

    string imie;
    string nazwisko;
    vector<double>oceny;

};


Student najlepszy_student(vector<Student> studs)
{
    vector<double> srednia;
int i,j;
    for(int i = studs){
        double srednia;
        for( auto j : i.oceny){
            srednia += j;
        }
    srednia/= i.oceny.size();
    srednia.push_back(srednia);
    }
    double max;
    int stdn;
    
    for(int i=0; i<srednia.size(); i++){
        if(srednia[i]>max){
            max=srednia[i];
            stdn=i;
        }
    }
    return studs[stdn];
}

int main(){
    auto s1 = Student{"Mila", "Jankowska", {6,5.6,6,2,5,4,3}};
    auto s2 = Student{"Karolina", "Bielecka" ,{2,3,1.5,4,4,2}};
    auto s3 = Student{"Kinga", "lukowska", {5,4,4,1,1,1.5,6}};
    auto s4 = Student{"Janina", "Szybinska",{1,2.4,3,4,1,5,2}};
    vector<Student> students = {s1, s2, s3, s4};
	cout<<"najlepszy student: "<< najlepszy_student(students).imie<<endl;
    return 0;
}
