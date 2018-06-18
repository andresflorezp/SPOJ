#include <bits/stdc++.h>

using namespace std;


int veri(int T,vector<int> D){
    int resp=0;
    for(int i=0;i<D.size();i++){
        if(D[i]<T){
            resp+=(T-D[i]);

        }
    }
    return resp;



}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int val;
    int T;
    vector<int> data;
    while(true){
        cin>>N;
        if(N==-1)break;
        T=0;
        for(int i=0;i<N;i++){
            cin>>val;
            data.push_back(val);
            T+=val;
        }
        if(T%N!=0)cout<<-1<<endl;
        else{
            cout<<veri(T/N,data)<<endl;

        }
        data.clear();


    }




    return 0;
}
