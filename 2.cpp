#include <iostream>
using namespace std;

int factorial(const int &n)
{
    cout << "x= " << n << " at " << &n << endl;
    if(n<=1) return 1;
    return n*factorial(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
}
