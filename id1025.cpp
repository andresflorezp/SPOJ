#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    int N;
    for(int i=0;i<T;i++){
        cin>>N;
        vector<int> hombres(N);
        vector<int> mujeres(N);
        long long resp=0;
        for(int j=0;j<N;j++)cin>>hombres[j];
        for(int j=0;j<N;j++)cin>>mujeres[j];
        sort(hombres.begin(),hombres.end());
        sort(mujeres.begin(),mujeres.end());
        for(int j=0;j<N;j++)resp+=hombres[j]*mujeres[j];
        cout<<resp<<endl;




    }


    return 0;
}
