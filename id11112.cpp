#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    int x,y;
    cin>>T;
    int r;
    for(int i=0;i<T;i++){
        cin>>x>>y;
        r=-1;
        if(x==y){
            if(x%2==0){
                r=x+y;
            }
            else{
                r=x+y-1;

            }
        }
        else if(y+2==x){
            if(x%2==0){
                r=x+y;

            }
            else{
                r=x+y-1;

            }


        }
        if(r==-1) cout<<"No Number"<<endl;
        else cout<<r<<endl;


    }



    return 0;
}
