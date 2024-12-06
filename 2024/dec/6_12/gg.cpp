#include<bits/stdc++.h>
using namespace std;
int T,n,m,k,l[200010],r[200010],x[200010],v[200010],s,ans;
priority_queue<int>q;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>T;
	while(T--){
		cin>>n>>m>>k,s=1,ans=0;
		while(!q.empty())q.pop();
		for(int i=1;i<=n;i++)cin>>l[i]>>r[i];
		for(int i=1;i<=m;i++)cin>>x[i]>>v[i];
		for(int i=1,j=0;i<=n;i++){
			while(x[j+1]<l[i]&&j<m)j++,q.push(v[j]);
			while(s<=r[i]-l[i]+1&&!q.empty())s+=q.top(),q.pop(),ans++;
			if(s<=r[i]-l[i]+1){ans=-1;break;}
		}
		cout<<ans<<"\n";
	}
    return 0;
} 
