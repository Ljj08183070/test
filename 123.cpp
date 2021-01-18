#include <bits/stdc++.h>
using namespace std;

int dp[310][310], a[310];
int s[310];

int main() {
    // freopen("in.txt", "r", stdin);
    memset(dp, 0x3f, sizeof dp);
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        s[i] = s[i - 1] + a[i];
        dp[i][i] = 0;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n; i++) {
            int l = i, r = i + len - 1;
            for (int k = l; k < r; k++) {
                dp[l][r] =
                    min(dp[l][r], dp[l][k] + dp[k + 1][r] + s[r] - s[l - 1]);
            }
        }
    }
    //printf("%d", dp[1][n]);
    for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		cout<<dp[i][j]<<' ';
		cout<<endl;
	}
    return 0;
}
