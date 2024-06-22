#include<iostream>
using namespace std;
  
int main()  
{ 
    cout.precision(1);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    double time, pay;  
    while(cin >> time >> pay)  
    {  
        double total = 0;  
        if(time <= 60)  
        {  
            total = time * pay;  
        }  
        else if(time <= 120)  
        {  
            total += 60 * pay;  
            time -= 60;  
            total += time * pay * 1.33;  
        }  
        else   
        {  
            total = 60 * pay;  
            total += 60 * pay * 1.33;  
            time -= 120;  
            total += time * pay * 1.66;  
        } 
        cout << total << endl;
    }  
}  