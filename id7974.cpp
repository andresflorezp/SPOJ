#include <bits/stdc++.h>

using namespace std;
int main(){
	int a,b,c;
	int res1,res2;
	int mult1,mult2;
	while(true){
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)break;
		res1 = b-a;
		res2 = c-b;
		mult1 = b/a;
		mult2 = c/b;
		
		if (res1==res2){
			cout<<"AP "<<c+res2<<endl;
			
		}
		else{
			cout<<"GP "<<c*mult2<<endl;
		}
		
		
		
	}
	
	
	
	
	return 0;
}
