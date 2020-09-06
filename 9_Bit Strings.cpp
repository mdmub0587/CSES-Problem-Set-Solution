#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define m 1000000007

int power(int base, int power){
	int res = 1;
	while(power){
		if(power&1)
			res = (res*base)%m;
		base = (base*base)%m;
		power /=2;
	}
	return res%m;
}

void solve(){
	int n;
	cin>>n;
	cout<<power(2, n);
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}
