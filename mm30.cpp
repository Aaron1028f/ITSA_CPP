#include<iostream>
using namespace std;
  
int is_prime(int a)  
{  
    if(a <= 1) return 0;  
    for(int i = 2; i*i < a; i++)  
        if(a % i == 0)  
            return 0;  
    return 1;  
}  
  
int main()  
{  
    int num;  
    cin >> num;
    if(is_prime(num))  
        cout << "YES\n";
    else   
        cout << "NO\n";
}  