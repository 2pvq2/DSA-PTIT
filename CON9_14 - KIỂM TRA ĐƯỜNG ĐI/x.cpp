#include <bits/stdc++.h>
using namespace std;
#define MAX 1001

int n,m,q;
int a[MAX][MAX];
int Cxet[MAX];
void BFS(int u, int solienthong){
    int queue[MAX];
    int input =-1;
    int output=0;
    queue[++input] =u;
    Cxet[u]=solienthong;

    while (input>=output){
        int s=queue[output++];
        for (int v=1; v<=n; v++)
        if (a[s][v]>0 && Cxet[v]==0){
            Cxet[v]=solienthong;
            queue[++input]=v;
        }

    }
}
void duyetdothi(){
    int solienthong = 0;
    for (int u=1; u<=n; u++)
    if (Cxet[u] == 0 ){
        BFS(u,++solienthong);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(a, 0, sizeof(a));
        memset(Cxet, 0, sizeof(Cxet));
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            a[u][v] = 1;
            a[v][u]=1;
        }
       duyetdothi();
        cin >> q;
        for (int i=0; i<q; i++){
            int x,y;
            cin >>x>>y;
            if (Cxet[x]==Cxet[y]) cout << "YES"<<endl;
            else cout <<"NO"<<endl;

        }
    }
}