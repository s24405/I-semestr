#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
float average_of(std::vector<double> vec){
    float suma=0;    
    for(int i=0; i<vec.size(); i++){
        suma+=vec[i];
    }
    float srednia = suma/vec.size();
    return srednia;
}



int main(){
    auto numbers = std::vector<double>{1,2,2.5,8,5,4,9};
    std::cout<<average_of(numbers)<<"\n";
    return 0;
}
