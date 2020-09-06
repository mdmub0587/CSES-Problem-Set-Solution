#include<bits/stdc++.h>
using namespace std;

#define int int64_t

void solve(){
	int a,b;
	cin>>a>>b;
	int mn, mx;
	if(a>b)
		mn = b, mx = a;
	else
		mn = a, mx = b;
	if((a+b)%3 == 0 && !((a!=0) ^ (b!=0)) &&  mx <= 2*mn)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
		solve();
}

