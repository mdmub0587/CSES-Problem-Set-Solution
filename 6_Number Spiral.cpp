#include<bits/stdc++.h>
using namespace std;

#define int int64_t

void solve(){
	int x,y,val,n;
	cin>>x>>y;
	int mx=-1;
	bool row=false;
	if(x>=y){
		mx = x;
		row = true;
	}	
	else{
		mx = y;
		row = false;
	}
	
	n = mx - 1;
	val = (n*(2+(n-1)*2))/2;
	
	if(mx&1){
		if(row)
			val += y;
		else
			val += y + (y-x);
	}
	else{
		if(row)
			val += x + (x-y);
		else
			val += x;
	}
	cout<<val<<"\n";
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

