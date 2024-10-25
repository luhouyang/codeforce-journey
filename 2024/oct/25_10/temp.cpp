#include<iostream>
#include<cstdio>
using namespace std;
int a[100010],ans,n;
int main(){
	int T;scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++)scanf("%d",&a[i]);
		for(int i=2;i<n-i+1;i++){
			if(a[i]==a[i-1]||a[n-i+1]==a[n-i+2])swap(a[i],a[n-i+1]);
		}
		ans=0;
		for(int i=1;i<n;i++)ans+=(a[i]==a[i+1]);
		printf("%d\n",ans);
	}
}