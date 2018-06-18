#include <bits/stdc++.h>
#include <cmath>

using namespace std;
void prime(long long n,long long m);
int main(){
	int casos;
	long long n,m;
	cin>>casos;
	
	for(int i=0;i<casos;i++){
		cin>>n>>m;
		prime(n,m);
		if(i+1!=casos)cout<<endl;
		
		
		
	}
	
	
	
	
	return 0;
}

void prime(long long n,long long m){
	int flag;
	for(long long  i=n;i<=m;i++){
		flag = 1;
		for (long long j=2;j*j<=i;j++){
			if (i%j==0){
				flag=0;
				break;
			}
	
		}
		if(flag and i!=1)cout<<i<<endl;

	}
	
	
	
	
	
	
}
