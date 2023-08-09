#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int cur,prev=1,prev2=1;
	for(int i=2; i<=n; i++)
	{
	 cur=prev+prev2;
	 prev = prev2;
	 prev2 = cur;
	}
	cout<<cur<<endl;
	
	return 0;
}
