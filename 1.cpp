#include <iostream>
using namespace std;

int main()
{
    int a[3];
    char b[3];
    cout << &c << endl;
    for(int i=0; i<3; i++){
        cout << &a[i] << endl;  //cac phan tu cua a cach nhau 4 byte
        cout << &b[i] << endl;  //cac phan tu cua b khong co dia chi
    }
}
