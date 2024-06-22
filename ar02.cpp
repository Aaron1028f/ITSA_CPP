#include<iostream>
using namespace std;
  
int main()  
{  
    int arr[150] = {0}, i = -1, flag = 1;  
    while(cin >> arr[++i]){}  
    while(i > 0)  
    {  
        if(flag-- == 1) cout << arr[--i];
        else cout << " " << arr[--i];
    }  
    cout << endl;
}  