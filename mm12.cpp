#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // d + 30*2.54*t = 100t
    double d;
    cin >> d;
    int t = ceil((d*100) / (100-30*2.54));
    cout << t << "\n";
}