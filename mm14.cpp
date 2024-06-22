#include<iostream>
using namespace std;
  
int main()  
{  
    int sec, day_num, hour_num, min_num;  
    cin >> sec;
    day_num = sec / 86400;  
    sec %= 86400;  
    hour_num = sec / 3600;  
    sec %= 3600;  
    min_num = sec / 60;  
    sec %= 60;  

    cout << day_num << " days\n";
    cout << hour_num << " hours\n";
    cout << min_num << " minutes\n";
    cout << sec << " seconds\n";
}  