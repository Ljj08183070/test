#include<bits/stdc++.h>
using namespace std;
int steps(int *p)
{
	p[0]=1;
	p[1]=1;
	for(int i=2;i<=100;i++)
	p[i]=(p[i-2]+p[i-1])%1000000007;
}

int main()
{
	int n;
	int step[101];
	for(int i=1;i<=100;i++)
	step[i]=0;
	steps(step);
	while(cin>>n)
	{
		cout<<step[n]<<endl;
	}
	return 0;
 } 
