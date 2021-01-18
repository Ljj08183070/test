#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> > huf;
int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		n--;
		string x;
		char huffman[1505];
		cin>>x;
		strcpy(huffman,x.c_str());
		int zimubiao[26]={0};
		long long int ans=0;
		for(int i=0;i<x.length();i++)
		{
			int number=huffman[i]-97;
			zimubiao[number]=zimubiao[number]+1;
		}
		for(int i=0;i<26;i++)
		{
			if(zimubiao[i]!=0) 
			huf.push(zimubiao[i]);
		}
		while(huf.size()>1)
		{
			int a=huf.top();
			huf.pop();
			int b=huf.top();
			huf.pop();
			ans+=a+b;
			huf.push(a+b);
		}
		huf.pop();
		cout<<ans<<endl;
	}
 } 
