#include<iostream>
#include<iomanip>
using namespace std;
  
int main()  
{  
    int a;  
    cin >> a;
    cout << hex << setiosflags(ios::uppercase) << a << endl;
}  