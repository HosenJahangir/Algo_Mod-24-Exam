#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int knapsack(int n, int m, int a[])
{
    if (m == 1000)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    // memoization
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }

    // if (a[n - 1] <= m) ae line ta na thakle o habe
    int op1 = knapsack(n - 1, m + a[n - 1], a);
    int op2 = knapsack(n - 1, m, a);
    return op1 || op2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        memset(dp, -1, sizeof(dp));

        if (knapsack(n, m, a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
