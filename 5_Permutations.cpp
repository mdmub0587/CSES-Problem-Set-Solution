#include<bits/stdc++.h>
using namespace std;

#define int int64_t

void solve(){
	int n;
	cin>>n;
	if(n<4){
		if(n==1)
			cout<<1;
		else
			cout<<"NO SOLUTION";
	}
	else{
		for(int i=2; i<=n; i+=2)
			cout<<i<<" ";
		for(int i=1; i<=n; i+=2)
			cout<<i<<" ";
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}
