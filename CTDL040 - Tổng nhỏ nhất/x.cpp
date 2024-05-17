#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a[n+5];
        for(int i=1; i<=n; ++i) cin >>a[i];
        sort(a+1,a+n+1);
        long long ans2=0, ans1=0;
        for(int i = 1; i <= n; i+=2) ans1 = ans1*10+a[i];
        for(int i = 2; i <= n; i+=2) ans2 = ans2*10+a[i];
        cout <<ans1 + ans2 <<'\n';
    }

   return 0;
}