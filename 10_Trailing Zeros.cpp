#include<bits/stdc++.h>
using namespace std;

#define int int64_t

void solve(){
	int n;
	cin>>n;
	int res = 0;
	while(n>0){
		res += n/5;
		n = n/5;
	}	
	cout<<res<<"\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}

