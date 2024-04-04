#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, i, k = 0;
        cin >> n;
        string a[1009]={};
        a[0] = "0";
        a[1] = "1";
        int t = 2;
        while (a[k].length() < n)
        {
            a[t++] = a[k] + "0";
            a[t++] = a[k] + "1";
            k++;
        }
        for (i = k; i <= t; i++)
        {
            for (int j = 0; j < a[i].length(); j++)
            {
                cout << a[i][j];
                if (j < a[i].length() - 1)
                    cout << " ";
            }
            if (i<t) cout << endl;
        }
        
    }
}