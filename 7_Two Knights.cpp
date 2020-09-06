
#include<bits/stdc++.h>
using namespace std;

#define int int64_t

void solve(){
	int n;
	cin>>n;
	for(int k=1; k<=n; k++){
		int total_ways = (k*k*(k*k - 1))/2;
		int ways_of_attack = 4*(k-1)*(k-2);
		int ways_of_noattack = total_ways - ways_of_attack;
		cout<<ways_of_noattack<<"\n";
	}	
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}
