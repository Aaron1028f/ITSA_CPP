#include<iostream>
using namespace std;
  
int main()  
{  
    int arr[150] = {0}, i = -1, sum = 0;  
    while(cin >> arr[++i])  
        sum += arr[i] * arr[i] * arr[i];  
    cout << sum << endl;
}  