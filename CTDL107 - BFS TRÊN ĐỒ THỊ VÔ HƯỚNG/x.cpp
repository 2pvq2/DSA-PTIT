#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5;

int n, m, k;
int u;

vector<int> g[maxN];

void BFS(int s)
{
    bool visit[maxN];
    fill_n(visit, n + 1, false);

    queue<int> q;
    q.push(s);
    visit[s] = true;
    while (!q.empty())
    {
        u = q.front();
        cout << u << " ";
        q.pop();
        for (auto v : g[u])
        {
            if (visit[v] == false)
            {

                q.push(v);
                visit[v] = true;
            }
        }
    }
}

void nhap()
{
    int t;
    cin >> t;
    while (t--)
    {
        fill_n(g, maxN, vector<int>{});
        int x, y;
        cin >> n >> m >> k;
        for (int i = 1; i <= m; i++)
        {
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        BFS(k);
        cout << endl;
    }
}

int main()
{
    nhap();
}