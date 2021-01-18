#include<bits/stdc++.h>
using namespace std;
#define INT_MAX 0x7fffffff
//#define INT_MIN 0x80000000
int midans=INT_MAX;
int minans[11]={0,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX,INT_MAX};
void findminans(int *a,int n,int name,int answer=0)
{
	if(n==0) 
		minans[name]=min(minans[name],answer);
	for(int i=1;i<=10&&i<=n;i++)
	{
		findminans(a,n-i,name,answer+a[i]);
	}
	
 }
void findanswer(int *a,int n,int answer=0)
{
	if(n==0) 
		midans=min(midans,answer);
	for(int i=1;i<=10&&i<=n;i++)
	{
		findanswer(a,n-i,answer+minans[i]);
	}
} 

int main()
{
	int n;
	int a[11];
	for(int i=1;i<=10;i++)
	cin>>a[i];
	cin>>n;
	for(int i=1;i<=10;i++)
	findminans(a,i,i);
	int ans=0;

		int step=1;
		for(int i=2;i<=10;i++)
		if(minans[i]/i<minans[step]/step)
		step=i;
		while(n-step>step)
		{
			ans+=minans[step];
			n-=step;
		}

	findanswer(a,n);
	ans+=midans;
	cout<<ans;
	return 0;
} 
