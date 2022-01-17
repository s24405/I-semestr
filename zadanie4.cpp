
#include <iostream>
#include <string>

int main(){
    int m=0,z=0,x;
    std::string me,ze;
    std::string im[5];
    for(int i=0; i<5;i++)
    std::cin>>im[i];
    
    for(int i=0;i<5;i++)
    {
        x=im[i].size();
        if(im[i][x-1]=='a')
        {
            z+=1;
            ze+=im[i]+" ";
        }
        else
        {
            m+=1;
            me+=im[i]+" ";
        }
    }
    std::cout<<"Imiona męskie: "<<me<<" "<<m<<"\n";
    std::cout<<"Imiona żeńskie: "<<ze<<" "<<z<<"\n";
    return 0;
}

