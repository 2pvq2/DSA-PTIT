#include <bits/stdc++.h>
#include <stack>
using namespace std;
#define max 10000

int BFS(int n)
{
    int q[max];
    int d[max];
    int input = 0;
    int output = 0;

    q[input++] = n;
    d[input] = 0;

    while (input > output)
    {
        int s = q[output++];
        if (s == 1)
        {
            return d[output - 1];
        }
        if (s > 1)
        {
            d[input] = d[output - 1] + 1;
            q[input++] = s - 1;
        }

        for (int i = sqrt(s); i >= 2; i--)
        {
            if (n % i == 0)
            {
                d[input] = d[output - 1] + 1;
                q[input++] = s / i;
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << BFS(n) << endl;
    }
}