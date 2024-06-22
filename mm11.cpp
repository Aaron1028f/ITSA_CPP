#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int o0 = a/10;
    a %= 10;
    int o1 = a/5;
    int o2 = a %= 5;
    cout << "NT10=" << o0 << "\n";
    cout << "NT5=" << o1 << "\n";
    cout << "NT1=" << o2 << "\n";
}