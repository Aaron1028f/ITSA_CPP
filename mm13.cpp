#include<iostream>
using namespace std;
  
int main()  
{  
    int start_hour, start_min, end_hour, end_min;  
    cin >> start_hour >> start_min >> end_hour >> end_min;
    int d = (end_hour * 60 + end_min) - (start_hour * 60 + start_min);  
    int times, output;  
    if(d <= 120)  
    {  
        times = d / 30;  
        output = times * 30;  
        cout << output << "\n";
    }  
    else if(d <= 240)  
    {  
        d -= 120;  
        times = d / 30;  
        output = 120 + times * 40;  
        cout << output << "\n";
    }  
    else  
    {  
        d -= 240;  
        times = d / 30;  
        output = 120 + 160 + times * 60;  
        cout << output << "\n";
    }  
}  