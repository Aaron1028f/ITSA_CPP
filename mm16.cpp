#include<iostream>
#include<cmath>
using namespace std;
  
int main()  
{  
    int x, y;  
    while(cin >> x >> y)
    {  
        int len;  
        len = x*x + y*y;  
        len = sqrt(len);  
        if(len <= 100)  
            cout << "inside\n";
        else  
            cout << "outside\n";
    }  
}  