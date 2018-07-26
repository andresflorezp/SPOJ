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
void KMP(int n,string S,int m,string P){


    vector<int> F=funcionf(m,P);
    int i=0;
    int j=0;
    int cnt=0;
    vector<int> index;
    while(i<n){
        if(P[j]==S[i]){
            if(j+1==m){
                index.push_back(i-j);
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
    if(index.size()==0)cout<<endl;
    else for(int i=0;i<index.size();i++)cout<<index[i]<<endl;





}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    string S,P;
    while(cin>>m){
        cin>>P;
        cin>>S;
        n = S.size();
        KMP(n,S,m,P);



    }








    return 0;
}
