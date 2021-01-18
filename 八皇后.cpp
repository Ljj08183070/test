#include<bits/stdc++.h>
using namespace std;
int answer=0;
void findanswer(int a[8][8],int i,int ans=0);
int havej[8];
int zuo[15];
int you[15];
bool xie(int i_sub_j,int i_add_j); //×ó¼õÓÒ¼Ó 
void releasexie(int i_sub_j,int i_add_j);
int main()
{
	int k;
	cin>>k;
	int a[8][8];
	while(k--)
	{
		for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
		cin>>a[i][j];
		findanswer(a,0);
		cout<<answer<<endl;
		answer=0;
		
	}
	return 0;
}
void findanswer(int a[8][8],int i,int ans)
{
	if(i==8)
	answer=max(ans,answer);
	else
	for(int j=0;j<8;j++)
	{
		if(havej[j]==0)
		{
			havej[j]=1;
			if(xie(i-j,i+j))
			{
				findanswer(a,i+1,ans+a[i][j]);
				releasexie(i-j,i+j);
			}
			havej[j]=0;
		}
	}
}
bool xie(int i_sub_j,int i_add_j)
{
	bool ans=false;
	if(zuo[i_sub_j+7]==0&&you[i_add_j]==0)
	{
		ans=true;
		zuo[i_sub_j+7]=1;
		you[i_add_j]=1;
	}
	return ans;
}
void releasexie(int i_sub_j,int i_add_j)
{
	zuo[i_sub_j+7]=0;
	you[i_add_j]=0;
}
