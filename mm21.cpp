#include<iostream>
using namespace std;
  
int main()  
{  
    int a;
    long long output = 1;  
    cin >> a;
    for(int i = 1; i <= a; i++)
        output *= i;
    cout << output << endl;
}  