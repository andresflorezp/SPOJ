#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define MAX(a ,b) (( a > b )?a:b)
#define MAXI 101
int M[MAXI][MAXI];
int DP[MAXI][MAXI];

int f(int i,int j,int n,int m){
    if(i+1==n)return 0;
    else if(j-1<0){
        return  MAX(M[i+1][j] + f(i+1,j,n,m),M[i+1][j+1]+f(i+1,j+1,n,m));

    }
    else if(j+1>=m){
        return  MAX(M[i+1][j] + f(i+1,j,n,m),M[i+1][j-1]+f(i+1,j-1,n,m));

    }
    else{
        return  MAX(M[i+1][j] + f(i+1,j,n,m),MAX(M[i+1][j-1]+f(i+1,j-1,n,m),M[i+1][j+1]+f(i+1,j+1,n,m)));


    }

}


int g(int i,int j,int n,int m){
    if(i+1==n)return DP[i][j]=0;
    else if(DP[i][j]!=-1)return DP[i][j];
    else if(j-1<0){
        return DP[i][j]= MAX(M[i+1][j] + g(i+1,j,n,m),M[i+1][j+1]+g(i+1,j+1,n,m));

    }
    else if(j+1>=m){
        return DP[i][j]= MAX(M[i+1][j] + g(i+1,j,n,m),M[i+1][j-1]+g(i+1,j-1,n,m));

    }
    else{
        return DP[i][j]= MAX(M[i+1][j] + g(i+1,j,n,m),MAX(M[i+1][j-1]+g(i+1,j-1,n,m),M[i+1][j+1]+g(i+1,j+1,n,m)));


    }

}




int main(){
    int T;
    int n,m;
    scanf("%i",&T);
    for(int i=0;i<T;i++){
        scanf("%i %i",&n,&m);
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                scanf("%i",&M[j][k]);
                DP[j][k]=-1;
            }
        }

        int resp=0;
        for(int h=0;h<m;h++){

            resp = MAX(resp,M[0][h]+g(0,h,n,m));

        }

        cout<<resp<<endl;



    }


    return 0;
}
