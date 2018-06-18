#include <bits/stdc++.h>
using namespace std;
long long countZero(long long N){
    long long cnt=0;
    while(N!=0){
        N/=5;
        cnt+=N;


    }
    return cnt;




}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    long long N;
    for(int i=0;i<T;i++){
        cin>>N;
        cout<<countZero(N)<<endl;



    }


    return 0;

}
