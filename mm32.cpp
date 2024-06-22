#include<iostream>
using namespace std;
  
int main()  
{  
    int a;  
    cin >> a;
    int hundred = a / 100;  
    int tenth = a % 100;  
    int ten = tenth / 10;  
    int one = tenth % 10;  
    if(a == one*one*one + ten*ten*ten + hundred*hundred*hundred)  
        cout << "Yes\n";
    else  
        cout << "No\n";
}  