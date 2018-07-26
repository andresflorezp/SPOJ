#include <bits/stdc++.h>
using namespace std;
int F[1000001];
void funcionf(int n,string S){
    memset(F,0,sizeof(F));
    int i=1;
    int j=0;
    while(i<n){
        if(S[i]==S[j]){
            F[i]=j+1;
            i++;
            j++;

        }
        else if(j>0){
            j=F[j-1];

        }
        else{
            F[i]=0;
            i++;


        }


    }
    for(int i=0;i<n;i++){
        cout<<F[i]<<" ";



    }




}
int KMP(int n,string S,int m,string P){

    memset(F,0,sizeof(F));
    funcionf(m,P);
    int i=0;
    int j=0;
    int cnt=0;
    while(i<n){
        if(P[j]==S[i]){
            if(j+1==m){
                cnt++;
                j=F[j];
                i++;


            }
            else{
                i++;
                j++;
            }


        }
        else if(j>0){
            j=F[j-1];

        }
        else{
            i++;

        }



    }
    return cnt;





}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        string S;
        cin>>S;
        funcionf(2*n,S+S);
        cout<<endl;
        /*
        cout<<"Test case #"<<(i+1)<<endl;
        for(int j=2;j<=n;j++){
            string prefix = S.substr(0,j);
            string concat = prefix+prefix;
            int resp = KMP(concat.size(),concat,prefix.size(),prefix);
            if(resp-1>1)cout<<(j)<<" "<<resp-1<<endl;

        }
        cout<<endl;
        */



    }





    return 0;
}
