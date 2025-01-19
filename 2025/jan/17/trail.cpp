#include<bits/stdc++.h>
using namespace std;
long long t,n,m,a[1005][1005];
string s;
void solve(){
	cin>>n>>m>>s;
	for(int i=1;i<=n;++i)for(int j=1;j<=m;++j)cin>>a[i][j];
	int i=1,j=1;
	s.push_back('D');
	for(auto d:s){
		if(d=='D'){
			long long sum=0;
			for(int k=1;k<=m;++k){
				sum+=a[i][k];
			}a[i][j]=-sum;
			++i;
		}else{
			long long sum=0;
			for(int k=1;k<=n;++k)sum+=a[k][j];
			a[i][j]=-sum;
			++j;
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j)cout<<a[i][j]<<' ';
		cout<<endl;
	}
}
int main(){
	cin>>t;
	while(t--)solve();
} 