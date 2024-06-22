#include<iostream>
using namespace std;
  
int main()  
{
    cout.precision(1);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    double a;  
    while(cin >> a);
    {  
        if(a <= 800) 
            cout << a*0.9 << endl;
        else if(a < 1500) 
            cout << a*0.9*0.9 << endl;
        else 
            cout << a*0.9*0.79 << endl;
    }  
}  