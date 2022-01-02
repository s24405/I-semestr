#include <iostream>

using namespace std;

int main(){

    int a;
    cout << "podaj wymiary ramki " << endl;
    cin >> a;

    for (int z=1;z<=a;z++ )
        {
        cout << "*";
    }
    cout <<endl;
    for(int i=1;i<=(a-2); i++)
        {
            for(int p=1; p<=1; p++)
                {
                cout << "*";
            }
            for(int d=1; d<=(a-2);d++)
                {
                cout << " ";

            }
            cout << "*" <<endl;
        }
    for(int j=1; j<=a; j++)
        {
        cout << "*";
    }
    return 0;
}

