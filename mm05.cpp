#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    cout.precision(1);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    double a;
    cin >> a;
    cout << round(a * a * 10)/10.0 << "\n";
}