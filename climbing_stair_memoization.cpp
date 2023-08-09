#include<bits/stdc++.h>
using namespace std;

int f(vector<int>&v1,int n)
{
 if(n==0) return 1;
 if(n==1) return 1;
 
 if(v1[n]!=-1) return v1[n];
 
 int left = f(v1,n-1);
 int right = f(v1,n-2);
 
 return v1[n]=left + right;
 
}
int main() {
 int n;
 cin>>n;
 vector<int>v1(n+1,-1);
 cout<<f(v1,n);
	return 0;
}
