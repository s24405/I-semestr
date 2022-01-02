#include <iostream>
#include<algorithm>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
auto sort_asc(int arr[]) -> void
{
	for(int i=0; i<10; ++i)
	cout<<arr[i]<<" "<<endl;

}
int main()
 {

	int arr[10]= { 0,67,3,2,76,234,9,43,12,34};
	
	cout<<" before ";
	sort_asc(arr);
	sort(arr,arr+10);
	cout<<" and after "<<endl;
	sort_asc(arr);
	
	return 0;
}
