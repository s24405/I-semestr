#include <iostream>
#include <vector>
#include <string>

struct Student{

    std::string name;
    std::string surname;
    std::vector<double> grades;

};


Student get_best_student(std::vector<Student> studs){
    std::vector<double> averages;

    for(auto i : studs){
        double average;
        for( auto j : i.grades){
            average += j;
        }
    average/= i.grades.size();
    averages.push_back(average);
    }
    double max;
    int stdn;
    
    for(int i=0; i<averages.size(); i++){
        if(averages[i]>max){
            max=averages[i];
            stdn=i;
        }
    }
    return studs[stdn];
}

int main(){
    auto s1 = Student{"Kinga", "Kolowska", {6,5,2,2,1,4,1}};
    auto s2 = Student{"Marta", "Bielik" ,{2,6,5.5,1,1,2}};
    auto s3 = Student{"Iza", "Kiedrowska", {5,6,6,6,3,1.5,2.5}};
    auto s4 = Student{"Kuba", "Hinc",{1,2,2,1,1,5.5,5.5}};
    std::vector<Student> students = {s1, s2, s3, s4};
    std::cout<<"Best student: "<< get_best_student(students).name<<"\n";
    return 0;
}
