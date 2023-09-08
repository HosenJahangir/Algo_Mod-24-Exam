#include <bits/stdc++.h>
using namespace std;

int(knapsack(int n, int d))
{
    if (n > d)
        return 0;
    if (n == d)
        return 1;
    int op1 = knapsack(n + 3, d);
    int op2 = knapsack(n * 2, d);
    return op1 || op2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        if (knapsack(1, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
