#include <iostream>
using namespace std;

int main()
{
    int n=6;
    for (int i = 0; i < n; i++) //n wartosc pomocnicza
    {
        
        for (int j = 1; j < n - i; j++)
            cout << "*";
        for(int j = 1; j > n - i; j++)
            cout << "*";
        
        for (int j = 0; j < 2 * i + 1; j++)
            cout << " ";
        cout << endl;
    }
    return 0;
}
