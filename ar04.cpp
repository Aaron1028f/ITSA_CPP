#include<iostream>
using namespace std;
  
int main()  
{  
    int num;  
    cin >> num;
    for(int i = 0; i < num; i++)  
    {  
        int n, m, arr[150][150] = {0}; 
        cin >> n >> m; 
        for(int j = 0; j < n; j++)  
            for(int k = 0; k < m; k++)  
                cin >> arr[j][k];
        for(int j = 0; j < n; j++)  
        {  
            for(int k = 0; k < m; k++)  
            {  
                if(arr[j][k] == 0 || arr[j+1][k] + arr[j][k+1] + arr[j-1][k] + arr[j][k-1] == 4)  
                    cout << "_ ";
                else cout << "0 ";
            }  
            cout << endl;  
        }  
        if(i + 1 != num) cout << endl;
    }  
}  