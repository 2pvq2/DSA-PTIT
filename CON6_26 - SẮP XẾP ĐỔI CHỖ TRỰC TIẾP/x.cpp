#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()

{
    int n, i, j, a[1000], t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        for (i = 1; i <= n; i++)
            cin >> a[i];
        for (i = 1; i < n; i++)
        {
            for (j = i + 1; j <= n; j++)
                if (a[i] > a[j])
                {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            cout << "Buoc " << i << ": ";

            for (j = 1; j <= n; j++)
                cout << a[j] << " ";

            if (i < n)
                cout << endl;
        }
    }
}