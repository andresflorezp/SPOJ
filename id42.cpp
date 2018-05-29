#include <bits/stdc++.h>

using namespace std;
int voltear(int numero){
	int resp = 0;
	while(numero>0){
		resp= resp*10 +numero%10;
		numero/=10;
	}
	return resp;
	
	
}
	
	



int main(){
	int n1,n2;
	int casos;
	scanf("%i",&casos);
	for(int i=0;i<casos;i++){
		scanf("%i %i",&n1,&n2);
		cout<<(voltear(voltear(n1)+voltear(n2)))<<endl;

	}
		

	return 0;
}

