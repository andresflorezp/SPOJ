#include <iostream>
using namespace std;
int main()
{
	unsigned long long b,d,e;
	unsigned long long t,k,n;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		cin>>n;
			b=n*(2*n+1)*(n+2);
			b=b/8;


		cout<<b<<endl;
	}
	return 0;
}
