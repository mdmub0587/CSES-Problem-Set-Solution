
#include<bits/stdc++.h>
using namespace std;

#define int int64_t

void solve(){
	int n,a;
	cin>>n;
	vector<int> v(n+1, 0);
	for(int i=1; i<n; i++){
		cin>>a;
		v[a] = 1;
	}
	int res=-1;
	for(int i=1; i<=n; i++){
		if(v[i]==0){
			res = i;
			break;
		}
	}
	cout<<res;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}
