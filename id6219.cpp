#include <bits/stdc++.h>
#include <string>
using namespace std;
int f(string A,string B,int n,int m);
int g(string A,string B,int n,int m);
int main(){
	int casos;
	cin>>casos;
	string A;
	string B;
	for(int i=0;i<casos;i++){
		cin>>A;
		cin>>B;
		cout<<g(A,B,A.length(),B.length())<<endl;

	}
	
	
	
	
}
int f(string A,string B,int n,int m){
	if(n==0)return m;
	else if(m==0)return n;
	else if(n==0 && m==0)return 0;
	else if(A[n-1]==B[m-1])return f(A,B,n-1,m-1);
	else{
		return 1+min(min(f(A,B,n-1,m),f(A,B,n,m-1)),f(A,B,n-1,m-1));
		
	}
	
	
	
	
}
int g(string A,string B,int n,int m){
	int DP[n+1][m+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0)DP[i][j]=j;
			else if(j==0)DP[i][j]=i;
			else if(i==0 && j==0)DP[i][j]=0;
			else if(A[i-1]==B[j-1])DP[i][j]=DP[i-1][j-1];
			else{
				DP[i][j]=1+min(min(DP[i-1][j],DP[i][j-1]),DP[i-1][j-1]);
		
			}
	
		}
	}
	return DP[n][m];
	
	
}
