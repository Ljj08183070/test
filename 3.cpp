#include<bits/stdc++.h>
using namespace std;
void change(int x)
{
	if(x>8)
	change(x/8);
	cout<<x%8;
}
int main()
{
	int n;
	cin>>n;
	change(n);
	return 0; 
}
