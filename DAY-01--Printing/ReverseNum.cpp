#include <bits/stdc++.h>
using namespace std;

void ReverseNum(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<j+1<<" ";
        }
        
        cout<<endl;
    }
    
}

int main(){
    ReverseNum(5);
    return 0;
}