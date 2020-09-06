#include<bits/stdc++.h>
using namespace std;

#define int int64_t

void solve(){
	int n, inc;
	cin>>n;
	vector<int> v(n, 0);
	for(int i=0; i<n; i++)
		cin>>v[i];
	int min_turn = 0;
	for(int i=1; i<n; i++){
		if(v[i-1] - v[i]>0){
			inc = v[i-1] - v[i];
			v[i] += inc;
			min_turn += inc;
		}
	}
	cout<<min_turn;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}
