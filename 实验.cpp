#include<bits/stdc++.h>
using namespace std;
int n=0;
void sorts(char *p,int num)
{
	char change;
	for(int i=0;i<num;i++)
	for(int j=i+1;j<num;j++)
	if(p[i]>p[j])
	{
		change=p[i];
		p[i]=p[j];
		p[j]=change;
	}
}
int main()
{
	int ans=1;
	for(int i=0;i<95;i++)
	ans=(ans*97)%100000007;
	cout<<ans;
	return 0;
}
