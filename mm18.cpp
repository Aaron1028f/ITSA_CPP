#include<iostream>
using namespace std;
    
int main()  
{  
    int input;  
    cin >> input; 
    unsigned int n = input;  
    for (int i = 7; i >= 0; i--)  
        cout << ((n >> i) & 1); 
    cout << "\n";
}  