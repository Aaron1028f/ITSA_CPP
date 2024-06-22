#include<iostream>
using namespace std;
  
int main()  
{  
    int n, flag = 1;  
    cin >> n;
    for(int i = 1; i <= n; i++)  
        if(i % 5 == 0 && i % 7 == 0)  
        {  
            if(flag-- == 1) cout << i;
            else cout << " " << i;
        }  
    cout << endl;
}  