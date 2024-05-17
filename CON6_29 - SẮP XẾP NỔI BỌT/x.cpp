#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n, i, j, a[1000], t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        int m = n;
        for (i = 1; i <= n; i++)
            cin >> a[i];
        i = 1;

       int  kt = 0;
        while (n > 2)
        {
            if (a[i] > a[i+1])
            {
                kt = 1;
                swap(a[i], a[i+1]);
            }
            i++;
            if (i+1 == n)
            {
                if (kt == 0)
                    exit;
                kt = 0;
                cout << "Buoc " << m - n + 1 << ": ";
                for (i = 1; i <= m; i++)
                    cout << a[i] << " ";
                i = 1;
                n--;
                cout << endl;
            }
        }
    }
}