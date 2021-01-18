#include<bits/stdc++.h>
using namespace std;
int a[305][305];
int n;
void w(int *p)
{
	for(int i=1;i<=n;i++)
	{
		a[i][i]=p[i];
	}
	for(int i=1;i<n;i++)
	a[i][i+1]=p[i]+p[i+1];
	for(int i=2;i<n;i++)
	for(int j=1;j<=n-i;j++)
	{
		a[j][j+i]=min(a[j][j]+2*a[j+1][j+i],2*a[j][j+i-1]+a[j+i][j+i]);
		for(int k=1;k<i-1;k++)
		a[j][j+i]=min(a[j][j+i],2*(a[j][j+k]+a[j+k+1][j+i]));
	}
}
int main()
{
	int wei[305];
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>wei[i];
	w(wei);
	//cout<<a[1][n];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		cout<<a[i][j]<<' ';
		cout<<endl;
	}
	return 0;
 } 
