#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        long long Tn=2*N*N - 2*N +1;
        cout<<Tn<<endl;

    }


    return 0;
}
