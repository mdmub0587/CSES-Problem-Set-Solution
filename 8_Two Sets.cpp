#include<bits/stdc++.h>
using namespace std;

#define int int64_t

void solve(){
	int n;
	cin>>n;
	int sum = (n*(n+1))/2;
	if(sum&1)
		cout<<"NO\n";
	else{
		cout<<"YES\n";
		vector<int> v(n+1,0);
		int half_sum = sum/2;
		int cnt=0;
		for(int i=1;i<=n ; i++)
			v[i] = i;
		for(int i=n; i>=1; i--){
			if(half_sum==0)
				break;
			if(half_sum - v[i]>=0){
				half_sum -= v[i]; 
				v[i] *=-1;
				//cout<<half_sum<<"\n";
				cnt +=1;
			}
			else{
				v[half_sum] *= -1;
				cnt +=1;
				half_sum = 0;
			}
		}
		cout<<cnt<<"\n";
		for(int i=1; i<=n ; i++)
			if(v[i]<0)
				cout<<v[i]*-1<<" ";
		cout<<"\n";
		cout<<n-cnt<<"\n";
		for(int i=1; i<=n; i++)
			if(v[i]>0)
				cout<<v[i]<<" ";
		cout<<"\n";				
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	solve();
}
