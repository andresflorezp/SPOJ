#include <bits/stdc++.h>
#include <string>
using namespace std;
long long merge(int A[],int p,int q,int r){
	long long count=0;
	int n1 = q-p+1;
	int n2 = r-q;
	int L[n1+1];
	int R[n2+1];
	for(int i=0;i<n1;i++){
		L[i]=A[i+p];
	}
	for(int i=0;i<n2;i++){
		R[i]=A[i+q+1];
	}
	L[n1]=10000001;
	R[n2]=10000001;
	int i=0;
	int j=0;
	for(int k=p;k<=r;k++){
		if (L[i]<=R[j]){
			A[k]=L[i];
			i++;
		}
		else{
			A[k]=R[j];
			j++;
			count+=n1-i;
			
			
		}
		
		
	}
	return count;
	
	
}
long long mergeSort(int A[],int p,int r){
	long long x=0;
	long long y=0;
	long long z=0;
	if(p<r){
		int q = (p+r)/2;
		x=mergeSort(A,p,q);
		y=mergeSort(A,q+1,r);
		z=merge(A,p,q,r);
			
	}
	return x+y+z;
	
}

int main(){
	int casos;
	int numbers;
	string blank;
	scanf("%i",&casos);
	for(int i=0;i<casos;i++){
		
		scanf("%i",&numbers);
		int numeros[numbers];
		for(int j=0;j<numbers;j++){
			scanf("%i",&numeros[j]);
			
		}
		printf("%lli\n",mergeSort(numeros,0,numbers-1));	
	}
	
	
	
	
	
	
	
	return 0;
}


