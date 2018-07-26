#include <bits/stdc++.h>

using namespace std;
map<int, long long> DP;
long long f(long long n){
    if(n==0)return 0;
    if(floor(n/2)+floor(n/3)+floor(n/4)<n){
        return n;
    }
    else{
        return f(floor(n/2))+f(floor(n/3))+f(floor(n/4));
    }

}

long long g(long long n){
    if(n==0)return DP[n]=0;
    if(DP[n]!=0)return DP[n];
    if(floor(n/2)+floor(n/3)+floor(n/4)<=n){
        return DP[n]=n;
    }
    else{
        return DP[n]=g(floor(n/2))+g(floor(n/3))+g(floor(n/4));
    }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N;
    while(cin>>N){
        cout<<g(N)<<endl;
    }



    return 0;

}
