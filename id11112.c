#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    int x,y;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>x>>y;
        if(x%2==1 && y%2==1)cout<<(x+y)-1<<endl;
        else if(x%2==0 && y%2==0)cout<<(x+y)<<endl;
        else cout<<"No Number"<<endl;


    }



    return 0;
}
