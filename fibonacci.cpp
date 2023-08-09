#include<bits/stdc++.h>
using namespace std;

int f(vector<int>&v1,int n)
{
    if(n<=1) return n;
    
    return f(v1,n-1) + f(v1,n-2);
}
int main()
{
    int n;
    cin>>n;
    vector<int>v1(n+1,-1);
    cout<<f(v1,n);
    return 0;
}
