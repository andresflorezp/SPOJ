#include <bits/stdc++.h>

using namespace std;
int fibo(int n);
int main(){
	int N;
	scanf("%i",&N);
	printf("%i",fibo(N));

	
	return 0;

}

int fibo(int n){
	if(n==1)return 1;
	if(n==2)return 2;
	if(n==3)return 3;
	else{
		return n + ((n/2)-1);
	}
	
	
	
}
