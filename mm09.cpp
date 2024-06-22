#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    cout.precision(0);
    cout.setf(ios::fixed);
    int a;
    cin >> a;
    if(a > 31) cout << "Value of more than 31\n";
    else cout << pow(2, a) << "\n";
}