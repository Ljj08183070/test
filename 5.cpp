#include<bits/stdc++.h>
using namespace std;
int power(int n)
{
	int ans=1;
	for(int i=0;i<n;i++)
	ans=(ans*n)%100000007;
	return ans;
}
void arr(int *p)
{
	p[1]=2;
	for(int i=2;i<25001;i++)
	p[i]=(power(i)+p[i-1])%100000007;
}
int main()
{
	int a[25005];
	arr(a);
	long int x;
	while(cin>>x)
	cout<<a[x]<<endl;
	return 0;
}
