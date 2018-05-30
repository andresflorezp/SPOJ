#include <bits/stdc++.h>

using namespace std;
int f(long long a,long long b);
int main(){
	int casos;
	long long a;
	long long b;
	cin>>casos;
	for(int i=0;i<casos;i++){
		cin>>a>>b;
		cout<<f(a,b)<<endl;
		
		
		
	}
	
	
	
	return 0;
}

int f(long long a,long long b){
	if(b==0)return 1;
	else if(a==0)return 0;
	else if(b%2==0){
		return ((f(a,b/2)%10)*(f(a,b/2)%10))%10;
	}
	else{
		return ((a%10)*(f(a,b/2)%10)*(f(a,b/2)%10))%10;
		
	}
	
	
	
	
	
	
}


