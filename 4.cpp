#include<bits/stdc++.h>
using namespace std;
int n=0;
void sorts(char *p,int num)
{
	char change;
	for(int i=num;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(p[i]>p[j])
	{
		change=p[i];
		p[i]=p[j];
		p[j]=change;
	}
}
void arr(char *p,int num)
{
	if(num==n)
	{
		for(int i=0;i<num;i++)
		cout<<p[i];
		cout<<' ';
	}
	else
	{
		char q[n];
		for(int i=0;i<n;i++)
		q[i]=p[i];
		for(int i=num;i<n;i++)
		{
			p[num]=q[i];
			p[i]=q[num];
			sorts(p,num+1);
			arr(p,num+1);
			for(int z=0;z<n;z++)
			p[z]=q[z];	
		}
	}
}
int main()
{
	string m;
	cin>>m;
	char question[10];
	m.copy(question,10,0);
	while(1)
	{
		if(question[n]==',')
		break;
		else n++;
	}
	sorts(question,0);
	arr(question,0);
	return 0;
}
