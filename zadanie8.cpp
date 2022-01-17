#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
struct Student{

    std::string name;
    std::string surname;
    std::vector<double> grades;

};

struct Group{
    std::string tag;
    std::vector<Student> studs;
}; 

Group best_group_name(std::vector<Group> groups){
    std::vector<double> mid;
    
    for(auto grp : groups){
        std::vector<double> grd;
        for(auto stud :  grp.studs){
            grd.insert(grd.end(),stud.grades.begin(),stud.grades.end());
        }
        std::sort(grd.begin(), grd.end());
        auto size = grd.size();
        
        if(size & 1){
            mid.push_back(grd[size*1/2]);
        }
        else{
        auto nr=size*1/2;
        auto nmr=nr-1;
        double med = (grd[nmr] + grd[nr])*1/2;
        mid.push_back(med);
        }
    }
    double max;
    auto n=0;
    
    for(int i=0; i< mid.size(); i++){
        if(mid[i]>max){
            max = mid[i];
            n=i;
        }
    }
    return groups[n];
}

int main(){
    auto s1 = Student{ " Kinga " , " Kolowska " , { 6 , 5 , 2 , 2 , 1 , 4 , 1 }};
    auto s2 = Student{ "Marta", "Bielik",{ 2, 6, 5.5, 1, 1, 2}};
    auto s3 = Student{ " Iza " , " Kiedrowska " , { 5 , 6 , 6 , 6 , 3 , 1.5 , 2.5 } } ;
    auto s4 = Student{ " Kuba " , " Hinc " ,{ 1 , 2 , 2 , 1 , 1 , 5.5 , 5.5 }};
    
    auto group1 = Group{"Byki", {s2, s4}};
    auto group2 = Group{"Seniorzy", {s1, s3}};

    std::vector<Group> groups = {group1, group2};

    std::cout<<"Best group: "<< best_group_name(groups).tag<<"\n";

    return 0;
}
