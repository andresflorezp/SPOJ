#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T,N,K;
    cin>>T;

    for(int i=0;i<T;i++){
        cin>>N>>K;
        vector<long long> C(N);
        long long res=0;
        long long data;
        for(int j=0;j<N;j++){
            cin>>data;
            res+=data;
            C[j]=data;

        }
        sort(C.begin(),C.end());
        long long pro=(res/K);
        long long x=0;
        for(long long b=N/2;b>=1;b/=2){
            while(x+b<N && C[x+b]<=pro)x+=b;



        }

        cout<<C[x]<<endl;



    }



    return 0;
}
