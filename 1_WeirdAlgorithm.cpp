#include<bits/stdc++.h>
using namespace std;

#define int int64_t

void print(int n){
	cout<<n<<" ";
	if(n==1)
		return;
	if(n&1)
		print(3*n + 1);
	else
		print(n/2);
}

void solve(){
	int n;
	cin>>n;
	print(n);	
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}
