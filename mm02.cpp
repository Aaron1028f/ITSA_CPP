#include<iostream>
using namespace std;

int main()
{
    cout.precision(1);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    double top, down, height;
    while(cin >> down >> height)
        cout << down * height / 2 << "\n";
}