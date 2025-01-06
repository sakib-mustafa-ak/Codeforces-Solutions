#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,zero=0,no=0;
		cin>>n;
		vector<int> a(n);
		for(int i = 0 ; i < n ; i++)
			cin>>a[i];
		int mz=0;
		for(int i = 0 ; i < n ; i++){
			if(a[i]>0)
				no++;
			else if(a[i]==0&&no>0)
				mz++,no=0;
		}
		if(no>0)
			mz++;
		if(mz==0)
			cout<<0<<endl;
		else if(mz==1)
			cout<<1<<endl;
		else 			
			cout<<2<<endl;
	}
}