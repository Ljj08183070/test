#include<bits/stdc++.h>
using namespace std;
int m,n;
void sorts(double *p,int *q)
{
	for(int i=0;i<m;i++)
	for(int j=i+1;j<m;j++)
		if(p[i]<p[j])
		{
			double value=p[i];
			int num=q[i];
			p[i]=p[j];
			q[i]=q[j];
			p[j]=value;
			q[j]=num;
		}

}
int main()
{
	while(true)
	{
		double ans=0;
		cin>>m>>n; 
		if(m==0&&n==0)
		break;
		int (*p)[2]=new int [m][2];
		double *values=new double [m];
		int *num=new int [m];
		for(int i=0;i<m;i++)
		{
			cin>>p[i][0]>>p[i][1];
			values[i]=((double)p[i][1])/p[i][0];
			num[i]=i;
		}
		sorts(values,num);
		for(int i=0;i<m&&n>0;i++)
		    if(p[num[i]][0]<n)
		    {
		    	ans+=values[i]*p[num[i]][0];
		    	n-=p[num[i]][0];
			}
			else
			{
				ans+=n*values[i];
				break;
			}
		cout<<fixed<<setprecision(2)<<ans<<endl;
		delete [] p;
		delete [] values;
		delete [] num;
	}
}
