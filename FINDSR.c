#include <bits/stdc++.h>
using namespace std;

vector<int> funcionf(int n,string S){
    vector<int> F(n,0);
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
    return F;




}
int KMP(int n,string S,int m,string P){


    vector<int> F=funcionf(m,P);
    int i=0;
    int j=0;
    int cnt=0;
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
        return cnt;


    }
    if(index.size()==0)cout<<endl;
    else for(int i=0;i<index.size();i++)cout<<index[i]<<endl;





}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    string S,P;
    while(true){
        cin>>P;
        if(P=="*")break;
        S = P+P;
        int resp = KMP(S.size(),S,P.size(),P)-1;
        cout<<resp<<endl;




    }








    return 0;
}
