#include <bits/stdc++.h>
using namespace std;

void DiamondPattern(int n){
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <n-i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <i*2+1; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j <n-i-1; j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < n*2-(2*i+1); j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
    
}

int main(){
    DiamondPattern(5);
    return 0;
}