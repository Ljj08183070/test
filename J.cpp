#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> >q;
int main()
{
	long long int sum=0;
    int n, l;
    cin>>n>>l;
    for (int i = 1; i <= n; i++) 
	{
        int t;
        cin>>t;
        q.push(t);
    }
    while (q.size() > 1) 
	{
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        sum += a + b;
        q.push(a + b);
    }
    cout<<sum;
    return 0;
}
