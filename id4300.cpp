#include <bits/stdc++.h>

using namespace std;
int sieve[10001]={0};
int facts[10001]={0};
int ways[10001]={0};

void criba(){
    for(int i=2;i<=10001;i++){
        if(sieve[i]!=0)continue;
        for(int j=2*i;j<=10001;j+=i){
            if(sieve[j]==0)sieve[j]=i;
            else{
                sieve[j]=min(sieve[j],i);
            }

        }

    }
    /*
    for(int i=0;i<=10001;i++){
        cout<<sieve[i]<<" ";
    }
    */

}
void factores(int N){
    int n;
    memset(facts,0,sizeof(facts));
    n=N;
    while(n>=2){
        if(sieve[n]==0){
            facts[n]++;
            n=1;

        }
        else{
            facts[sieve[n]]++;
            n/=sieve[n];
        }

    }

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    criba();
    ways[1]=1;
    ways[2]=2;
    for(int i=3;i<=10000;i++){
        factores(i);
        int re=1;
        for(int j=0;j<=10000;j++){
            if(facts[j]!=0)re*=(facts[j]+1);

        }

        if(re%2==0)ways[i]=ways[i-1]+(re/2);
        else ways[i]=ways[i-1]+((re+1)/2);

    }



    int N;
    cin>>N;
    cout<<ways[N]<<endl;



    return 0;
}
