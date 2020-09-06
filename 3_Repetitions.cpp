#include<bits/stdc++.h>
using namespace std;

#define int int64_t

void solve(){
	string s;
	cin>>s;
	char hold_char = s[0];
	int cnt = 1;
	int max_cnt=1;
	for(int i=1; i<s.length(); i++){
		if(s[i]!=hold_char){
			max_cnt = max(max_cnt, cnt);
			cnt = 1;
			hold_char = s[i];
		}
		else
			cnt+=1;
	}
	max_cnt = max(max_cnt, cnt);
	cout<<max_cnt;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}

