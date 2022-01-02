#include <iostream>
#include <vector>

using namespace std;
auto average_of(vector<float> oceny )->float
{
	int suma=0;
	for (int x=0; oceny.size()>x; x++)
	{
		suma+=oceny[x];
	}
	float average=suma/oceny.sixe();
	return average;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<float> oceny{5,3,2,6,1};
	
	cout<<average_of(oceny);
	return 0;
}
