#include<bits/stdc++.h>
#include<cmath>
using namespace std;
double x[50001][2];	
int n;
long long int ans;
double cost(double position)
{
	double sum=0;
	for(int i=0;i<n;i++)
	sum+=abs(pow(x[i][0]-position,3))*x[i][1];
	return sum;
}
int main()
{
	int Ca;
	cin>>Ca;
	for(int p=1;p<=Ca;p++)
	{

		cin>>n;
		for(int i=0;i<n;i++)
		cin>>x[i][0]>>x[i][1];
		double l=-1000000;
		double r=1000000;
		double lmin,rmin;
		while(l+0.0000001<r)
		{
			lmin=l+(r-l)/3;
			rmin=r-(r-l)/3;
			if(cost(lmin)<cost(rmin))
			r=rmin;
			else
			l=lmin;
		}
		ans=cost(l)+0.5;
		cout<<"Case #"<<p<<": "<<ans<<endl;
	}
	return 0;
 } 
