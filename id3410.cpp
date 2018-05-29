#include <bits/stdc++.h>
int feynman(int n);
using namespace std;

int main(){
	int n;
	scanf("%i",&n);
	while(n!=0){
		printf("%i\n",feynman(n));
		scanf("%i",&n);
	}

	return 0;
}
int feynman(int n){
	int resp=0;
	for(int i=0;i<n;i++){
		resp+=(i+1)*(i+1);

	}
	return resp;	
	
}
