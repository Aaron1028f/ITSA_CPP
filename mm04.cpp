#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a+b << "\n";
    cout << a << "*" << b << "=" << a*b << "\n";
    cout << a << "-" << b << "=" << a-b << "\n";
    int c = a % b;
    cout << a << "/" << b << "=" << (c<0?a/b-1:a/b) << "..." << (c<0?c+b:c) << "\n";
}